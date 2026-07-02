class Solution:
    def wave(self, x: int)->int:
        s= str(x)
        if(len(s)<3):
            return 0
        ans=0
        for i in range(1,len(s)-1):
            a = s[i-1]
            b = s[i]
            c = s[i+1]
            if((b>a and b>c)or(b<c and b<a)):
                ans+=1
        return ans        
    def totalWaviness(self, num1: int, num2: int) -> int:
        ans =0
        for i in range(num1,num2+1):
            ans += self.wave(i)
        return ans    
        