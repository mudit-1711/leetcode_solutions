
class Solution:
    def minInsertions(self, s: str) -> int:
        ans=0
        st=[]
        i=0
        while i<len(s):
            if s[i]=='(':
                st.append('(')
            else:
                if i+1<len(s) and s[i+1]==')':
                    if not st:
                        ans+=1
                    else:
                        st.pop()
                    i+=1
                else:
                    ans+=1
                    if not st:
                        ans+=1
                    else:
                        st.pop()
            i+=1
        ans+=2*(len(st))
        return ans