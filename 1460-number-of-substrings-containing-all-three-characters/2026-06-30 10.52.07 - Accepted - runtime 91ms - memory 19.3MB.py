class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        n = len(s)
        cnt = [0, 0, 0]
        left = 0
        ans = 0
        for right in range(n):
            cnt[ord(s[right]) - ord('a')] += 1
            while cnt[0] > 0 and cnt[1] > 0 and cnt[2] > 0:
                ans += n - right
                cnt[ord(s[left]) - ord('a')] -= 1
                left += 1
        return ans