class Solution {
public:
    int scoreOfString(string s) {
        int i,j,sum=0;
        for(i=0;i<s.length()-1;i++){
            sum+=abs(s[i]-s[i+1]);
        }
        return sum;
    }
};