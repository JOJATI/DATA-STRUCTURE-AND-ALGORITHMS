class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        a=len(candyType)//2
        b=len(set(candyType))
        if b>=a:
            return a
        elif a>b:
            return b

        