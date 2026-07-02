class Solution:
    def processStr(self, s: str) -> str:
        ans = ""
        for i in range(len(s)):
            if s[i]>='a'and s[i]<='z':
                ans+=s[i]
            elif s[i]=='*':
                if len(ans)>=1:
                    ans = ans[:-1]
            elif s[i]=='#':
                ans=2*ans
            else:
                ans=ans[::-1]            
        return ans        