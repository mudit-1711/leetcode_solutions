class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        ans=[]
        s="123456789"
        for i in range(0,10):
            for j in range(i+1,10):
                temp=s[i:j]
                if int(temp)>=low and int(temp)<=high:
                    ans.append(int(temp))
        return sorted(ans)            
