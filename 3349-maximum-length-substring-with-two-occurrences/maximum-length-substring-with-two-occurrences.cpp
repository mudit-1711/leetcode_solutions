class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i,j,len=0;
        for(i=0;i<s.size();i++){
            for(j=i;j<s.size();j++){
                string temp = s.substr(i,j-i+1);
                map<char,int>mpp;
                for(auto x : temp)mpp[x]++;
                bool ok = true;
                for(auto x : mpp){
                    if(x.second>2){
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    len=max(len,j-i+1);
                }
            }
        }
        return len;
    }
};