class Solution:
    def sumCounts(self, nums: list[int]) -> int:
        MOD = 10**9 + 7
        n = len(nums)

        size = 4 * n
        tree1 = [0] * size  # Sum of distinct counts
        tree2 = [0] * size  # Sum of squared distinct counts
        lazy = [0] * size   # Lazy propagation

        def apply(node, l, r, val):
            length = r - l + 1

          
            tree2[node] = (
                tree2[node]
                + 2 * val * tree1[node]
                + val * val * length
            ) % MOD

            tree1[node] = (tree1[node] + val * length) % MOD
            lazy[node] += val

        def push(node, l, r):
            if lazy[node] == 0 or l == r:
                return

            mid = (l + r) // 2
            val = lazy[node]

            apply(node * 2, l, mid, val)
            apply(node * 2 + 1, mid + 1, r, val)

            lazy[node] = 0

        def update(node, l, r, ql, qr, val):
            if ql <= l and r <= qr:
                apply(node, l, r, val)
                return

            push(node, l, r)
            mid = (l + r) // 2

            if ql <= mid:
                update(node * 2, l, mid, ql, qr, val)

            if qr > mid:
                update(node * 2 + 1, mid + 1, r, ql, qr, val)

            tree1[node] = (
                tree1[node * 2] + tree1[node * 2 + 1]
            ) % MOD

            tree2[node] = (
                tree2[node * 2] + tree2[node * 2 + 1]
            ) % MOD

        last_seen = {}
        ans = 0

        for i, x in enumerate(nums):
          
            prev = last_seen.get(x, -1)
            update(1, 0, n - 1, prev + 1, i, 1)

            last_seen[x] = i

         
            ans = (ans + tree2[1]) % MOD

        return ans