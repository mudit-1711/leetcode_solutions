class Solution:
    def secondHighest(self, s: str) -> int:
        d=set()
        for i in s :
            if i.isdigit():
                d.add(int(i))
        if len(d)<2:
            return -1
        p=[]
        for i in d:
            p.append(i)    
        p.sort()
        return p[len(d)-2]        