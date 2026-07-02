class Solution:
    def leni(self,x):
        l =0
        while x>0 :
            l+=1
            x=x//10
        return l    
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        s = set()
        for i in range(len(arr1)):
            num = arr1[i]
            while num>0:
                s.add(num)
                num=num//10
        ans=0
        for j in range(len(arr2)):
            num = arr2[j]
            while num>0 :
                l = self.leni(num)
                if num in s :
                    ans=max(ans,l)
                num=num//10    
        return ans