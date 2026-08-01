class Solution {
public:
    int countValidPrefixes(string s) {
        int i,j,ans=0,one=0,zero=0;
        for(auto x : s){
            if(x=='1'){
                one++;
            }else{
                zero++;
            }
            if(abs(zero-one)<=1)ans++;
        }
        return ans;
    }
};