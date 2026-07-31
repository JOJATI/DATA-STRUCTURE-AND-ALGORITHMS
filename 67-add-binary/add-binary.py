class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a=int(a,2)
        b=int(b,2)
        c=a+b
        z=bin(c)
        result=str(z)
        return result[2:]
        