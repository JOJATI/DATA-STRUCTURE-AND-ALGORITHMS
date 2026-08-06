class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        x = n

        while True:
            p = 1
            for i in str(x):
                p *= int(i)

            if p % t == 0:
                return x

            x += 1