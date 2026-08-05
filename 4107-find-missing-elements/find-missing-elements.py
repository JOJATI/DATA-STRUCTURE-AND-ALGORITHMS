class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        a=[]
       
     
        mx=max(nums)
        mi=min(nums)
        for i in range(mi,mx+1):
            if i not in nums:
                a.append(i)
        return a


        