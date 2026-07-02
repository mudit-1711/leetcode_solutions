class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        w =[]
        for i in range(len(words)):
            c = words[i]
            ans=0
            for j in range(len(c)):
                ans+=weights[ord(c[j])-ord('a')]
            w.append(ans%26)    
        s =""
        for i in range(len(w)):
            s+=chr(ord('z')-w[i])
        return s    