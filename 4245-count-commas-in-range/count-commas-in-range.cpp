class Solution {
public:
    int countCommas(int n) {
        int i,j,ans=0;
        if(n<1000)return 0;
        for(i=1000;i<=n;i++){
            ans++;
        }
        return ans;
    }
};