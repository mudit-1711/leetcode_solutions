class Solution:
    def findTheDistanceValue(self, arr1: list[int], arr2: list[int], d: int) -> int:
        ans=0
        for a in arr1:
            ok = False
            for b in arr2:
                if abs(a-b)<=d:
                    ok=True
                    break
            if not ok :
                ans+=1
        return ans                