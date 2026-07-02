class Solution:
    def help(self , x:int)-> bool:
        a=""
        while x>0 :
            d = x%2
            a+=str(d)
            x=x//2
        for i in range(1,len(a)):
            if a[i]!=a[i-1] :
                return False
        return True            
    def countMonobit(self, n: int) -> int:
        ans =0
        for i in range(0,n+1):
            if self.help(i) == True :
                ans+=1
        return ans        
        