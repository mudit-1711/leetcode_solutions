class Solution:
    def strStr(self, h: str, n: str) -> int:
        ans=""
        if h==n:
            return 0
        s=""    
        for i in range(len(h)):
            s+=h[i]
            if(s==n):
                return i-len(n)+1
            if(len(s)>=len(n) and s!=n):
                s=s[1:len(s)]
        return -1            