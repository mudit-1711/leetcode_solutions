class Solution:
    def sumOfEncryptedInt(self, nums: List[int]) -> int:
        ans =0
        for i in range(len(nums)):
            num=nums[i]
            d=[]
            while num>0:
                d.append(num%10)
                num=num//10
            mx = max(d)
            size = len(d)
            s=""
            for i in range(size):
                s+=str(mx)
            ans+=int(s)
        return ans            