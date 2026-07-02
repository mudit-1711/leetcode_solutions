class Solution {
public:
    int firstUniqChar(string s) {
        int n,i,j;
        for(i=0;i<s.length();i++){
            bool u = true;
            for(j=0;j<s.length();j++){
                if(i!=j&&s[i]==s[j]){
                    u=false;
                    break;
                }
            }
                    if(u)return i;
        }
return -1;
    }
};