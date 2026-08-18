class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count=0
        for i in range (len(nums)):
            digit=int(log10(nums[i]))+1
            if digit%2==0:
                count+=1
        return count
            
        