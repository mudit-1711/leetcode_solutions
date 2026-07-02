class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,k=0;
        int n=grid.size();
        for(i=0;i<n;i++){
            for(j=0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    k++;
                }
            }
        }
        return k;
    }
};