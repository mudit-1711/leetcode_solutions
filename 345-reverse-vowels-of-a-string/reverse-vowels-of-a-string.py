class Solution:
    def reverseVowels(self, s: str) -> str:
        idx=set()
        vow=['a','e','i','o','u','A','E','I','O','U']
        v=[]
        for i in range(len(s)):
            if s[i] in vow:
                v.append(s[i])
                idx.add(i)
        v=v[::-1]
        j=0
        ans=""
        for i in range(len(s)):
            if i in idx :
                ans+=v[j]
                j+=1
            else:
                ans+=s[i]    
        return ans