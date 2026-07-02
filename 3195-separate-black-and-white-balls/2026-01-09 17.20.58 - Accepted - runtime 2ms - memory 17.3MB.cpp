class Solution {
public:
    long long minimumSteps(string s) {
        long long one=0,ans=0;
        for(auto c : s){
            if(c == '1'){
                one++;
            }else{
                ans+=one;
            }
        }
        return ans;
    }
};