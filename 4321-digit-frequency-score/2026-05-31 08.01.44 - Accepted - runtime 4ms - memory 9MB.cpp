class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int>mpp;
        int i,j;
        while(n>0){
            int d = n%10;
            mpp[d]++;
            n=n/10;
        }
        int ans =0;
        for(auto x : mpp){
            ans+=(x.first)*(x.second);
        }
        return ans;
    }
};