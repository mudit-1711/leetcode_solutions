class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        up = set()
        for i in range(len(word)):
            if word[i]>='A'and word[i]<='Z':
                up.add(word[i].lower())
        ans =0
        for i in range(len(word)):
            if word[i]>='a'and word[i]<='z':
                if word[i] in up :
                    ans+=1
                    up.remove(word[i])
        return ans                    