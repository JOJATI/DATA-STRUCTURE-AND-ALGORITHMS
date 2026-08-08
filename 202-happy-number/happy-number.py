class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()

        while n != 1:
            if n in seen:
                return False

            seen.add(n)

            sum = 0
            temp = n

            while temp != 0:
                rem = temp % 10
                sum += rem ** 2
                temp //= 10

            n = sum

        return True