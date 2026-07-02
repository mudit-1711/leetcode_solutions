class Solution {
public:
    bool checkOnesSegment(string s) {
        int i,j;
        for(i=0;i<s.size()-1;i++){
            if(s[i]=='0'&&s[i+1]=='1') return false;
        }
        return true ;
    }
};