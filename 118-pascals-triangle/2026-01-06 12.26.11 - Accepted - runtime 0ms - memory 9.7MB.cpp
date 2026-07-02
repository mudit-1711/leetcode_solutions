class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int i,j;
        for(i=0;i<numRows;i++){
            long long val =1;
            vector<int>row;
            for(j=0;j<=i;j++){
                row.push_back(val);
                val = val*(i-j)/(j+1);
            }
            ans.push_back(row);
        }
        return ans;
    }
};