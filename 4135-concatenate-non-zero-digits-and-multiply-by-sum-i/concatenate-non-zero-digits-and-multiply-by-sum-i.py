class Solution:
    def sumAndMultiply(self, n: int) -> int:
        if(n==0):
            return 0
        s = str(n)
        num=""
        for i in s:
            if(i!='0'):
                num+=i   
        numb=int(num)    
        temp=numb
        sum=0
        while temp>0:
            sum+=(temp%10)
            temp=temp//10
        return sum*numb    