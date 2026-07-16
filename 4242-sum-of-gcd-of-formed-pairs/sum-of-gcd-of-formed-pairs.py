class Solution:
    def gcdSum(self, nums: list[int]) -> int:
        prefixgcd=[]
        mx=-1
        for i in nums :
            mx=max(mx,i)
            prefixgcd.append(gcd(mx,i))
        prefixgcd.sort()
        i=0
        j=len(nums)-1
        ans=0
        while i<j:
            ans+=gcd(prefixgcd[i],prefixgcd[j])
            i+=1
            j-=1
        return ans    
