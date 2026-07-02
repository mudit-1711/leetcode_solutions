class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int i,j;
        for(i=0;i<s.size()-1;i++){
            if(abs((s[i]-'0')-(s[i+1]-'0'))>2){
                return false;
            }
        }
        return true;
    }
};