class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:
        n=sorted(nums)
        l=[]
        for i in range(len(n)):
            if n[i]==target:
                l.append(i)
        return l;
          
           
        