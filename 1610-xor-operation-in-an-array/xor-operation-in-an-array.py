class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        l=[]
        for i in range(n):
            l.append(start+2*i)
        ans=l[0]
        for i in range(1,len(l)):
            ans=ans^l[i]
        return ans

    
    
        

        