class Solution {
public:
    void f(vector<vector<int>>& grid){
        int i,j,m=grid.size(),n=grid[0].size();
        int last = grid[m-1][n-1];
        for(i=m-1;i>=0;i--){
            for(j=n-1;j>=0;j--){
                if(i==0&&j==0){
                    continue;
                }else if(j==0){
                    grid[i][j]=grid[i-1][n-1];
                }else{
                    grid[i][j]=grid[i][j-1];
                }
            }
        }
        grid[0][0]=last;
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        //k=k%(grid[0].size());
        while(k--){
            f(grid);
        }
        return grid;
    }
};