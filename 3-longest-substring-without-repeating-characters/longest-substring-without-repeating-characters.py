class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen =set()
        left=0
        result=0
        for right in range(len(s)):
            if s[right] in seen:
                while( s[right] in seen):
                    seen.remove(s[left])
                    left=left+1

            
            seen.add(s[right])
            result=max(result,len(seen))

        return result