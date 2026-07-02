class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans(m,string(n,'#'));
        int i,j;
        for(i=0;i<n;i++){
            ans[0][i]='.';
        }
        for(i=0;i<m;i++){
            ans[i][n-1]='.';
        }
        return ans;
    }
};