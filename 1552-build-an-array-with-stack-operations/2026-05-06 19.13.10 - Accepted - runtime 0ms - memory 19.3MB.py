class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        ans =[]
        i=0
        count=1
        while (i<len(target) ):
            if (target[i]==count):
                count+=1
                i+=1
                ans.append("Push")
            else :
                ans.append("Push")
                ans.append("Pop")
                count+=1    
        return ans        