class Solution:
    def maximum69Number (self, num: int) -> int:
        arr =[]
        while num>0:
            arr.append(num%10)
            num//=10
        arr.reverse()   
        for i in range(len(arr)) :
            if(arr[i]==6):
                arr[i]=9
                break
        ans = 0
        for i in range(len(arr)):
            ans = ans*10+ arr[i]
        return ans    