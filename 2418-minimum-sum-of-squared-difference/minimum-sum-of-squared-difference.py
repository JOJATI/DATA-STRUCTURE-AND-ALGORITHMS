class Solution:
    def minSumSquareDiff(self, nums1, nums2, k1, k2):
        diff = [abs(a - b) for a, b in zip(nums1, nums2)]

        k = k1 + k2

        if sum(diff) <= k:
            return 0

        left = 0
        right = max(diff)

        while left < right:
            mid = (left + right) // 2

            operations = sum(max(0, d - mid) for d in diff)

            if operations <= k:
                right = mid
            else:
                left = mid + 1

        target = left

        remaining = k

        for i in range(len(diff)):
            if diff[i] > target:
                remaining -= diff[i] - target
                diff[i] = target

        for i in range(len(diff)):
            if remaining == 0:
                break

            if diff[i] == target and diff[i] > 0:
                diff[i] -= 1
                remaining -= 1

        return sum(d * d for d in diff)