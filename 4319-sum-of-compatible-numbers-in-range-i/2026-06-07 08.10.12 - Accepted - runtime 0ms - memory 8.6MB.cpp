class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int i,j;
        int ans =0;
        for(i=max(1,n-k);i<=k+n;i++){
            if((n&i)==0){
                ans+=i;
            }
        }
        return ans;
    }
};