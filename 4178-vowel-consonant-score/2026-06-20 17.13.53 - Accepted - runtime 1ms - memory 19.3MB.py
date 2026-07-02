class Solution:
    def vowelConsonantScore(self, s: str) -> int:
        vowel = ['a','e','i','o','u']
        consonants = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm',
              'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z']
        v=0
        c=0
        for i in range(len(s)):
            if s[i] in vowel :
                v+=1
            elif s[i] in consonants :
                c+=1
        if c>0:
            return v//c
        return 0                