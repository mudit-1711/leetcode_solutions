class Solution {
public:
    int minAddToMakeValid(string s) {
        int i,j,l=0,r=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='(')l++;
            else if(l) l--;
            else r++;
        }
        return l+r;
    }
};