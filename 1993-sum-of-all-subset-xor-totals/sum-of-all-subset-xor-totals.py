class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        ans=0

        def dfs(index, xor):
            nonlocal ans

            if index == len(nums):
                ans += xor
                return

            # Include current element
            dfs(index + 1, xor ^ nums[index])

            # Exclude current element
            dfs(index + 1, xor)

        dfs(0, 0)
        return ans