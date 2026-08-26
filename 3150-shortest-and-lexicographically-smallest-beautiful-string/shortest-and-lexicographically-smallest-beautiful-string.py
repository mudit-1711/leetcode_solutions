class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        ans = ""

        for i in range(len(s)):
            for j in range(i, len(s)):
                st = s[i:j+1]
                one = 0
                for x in st:
                    if x == '1':
                        one += 1
                if one == k:
                    if len(ans) == 0:
                        ans = st
                    elif len(st) < len(ans):
                        ans = st
                    elif len(st) == len(ans) and st < ans:
                        ans = st
        return ans