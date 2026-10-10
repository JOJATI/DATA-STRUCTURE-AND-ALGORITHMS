class Solution:
    def minInsertions(self, s: str) -> int:
        insertions = 0
        open = 0

        i = 0

        while i < len(s):
            if s[i] == '(':
                open += 1

            else:
                # Check for a pair of consecutive ')'
                if i + 1 < len(s) and s[i + 1] == ')':
                    i += 1
                else:
                    # Insert one ')' to complete the pair
                    insertions += 1

                if open > 0:
                    open -= 1
                else:
                    # Insert '(' because no opening bracket exists
                    insertions += 1

            i += 1

        return insertions + 2 * open