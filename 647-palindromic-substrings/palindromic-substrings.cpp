class Solution {
public:
    bool f(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int i,j;
        int ans=0;
        for(i=0;i<s.size();i++){
            for(j=i;j<s.size();j++){
                string temp = s.substr(i,j-i+1);
                if(f(temp))ans++;
            }
        }
        return ans;
    }
};