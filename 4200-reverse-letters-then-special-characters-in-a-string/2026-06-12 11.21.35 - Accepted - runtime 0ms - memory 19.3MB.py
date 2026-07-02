class Solution:
    def reverseByType(self, s: str) -> str:
        pos=[]
        sp=[]
        lo=[]
        for i in range(len(s)):
            if s[i]>='a'and s[i]<='z':
                lo.append(s[i])
                pos.append(1)
            else:
                sp.append(s[i])
                pos.append(0) 
        sp.reverse()
        lo.reverse()       
        ans =""
        p1=0
        p2=0
        for i in range(len(pos)):
            if pos[i]==1 :
                ans+=lo[p1]
                p1+=1
            else:
                ans+=sp[p2]
                p2+=1
        return ans            
