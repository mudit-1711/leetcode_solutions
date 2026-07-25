class Solution(object):
    def findRepeatedDnaSequences(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        ans = []
        mpp = {}
        if len(s) < 10:
            return ans
        for i in range(len(s) - 9):
            temp = s[i:i + 10] 
            mpp[temp] = mpp.get(temp, 0) + 1
        for key, value in mpp.items():
            if value > 1:
                ans.append(key)
        return ans
        