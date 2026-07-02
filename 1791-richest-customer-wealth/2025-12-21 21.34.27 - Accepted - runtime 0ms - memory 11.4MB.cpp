class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j,k=0;
        int n=accounts.size();
        for(i=0;i<n;i++){
            int sum=0;
            for(j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            if(sum>k){
                k=sum;
            }
        }
        return k;
    }
};