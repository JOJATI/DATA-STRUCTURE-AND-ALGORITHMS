class Solution:
    def reverseBits(self, n: int) -> int:
        a=format(n,'032b')
        rev=a[::-1]
        return int(rev,2)
        
        
        