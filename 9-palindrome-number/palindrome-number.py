class Solution:
    def isPalindrome(self, x: int) -> bool:
        n=str(x)
        b=n[::-1]
      
        if x<0:
            return False
        if b==n:
            return True
        else:
            return False
            
        