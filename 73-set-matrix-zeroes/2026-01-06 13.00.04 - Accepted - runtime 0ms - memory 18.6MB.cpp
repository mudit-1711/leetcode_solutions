class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row(m,0);
         vector<int> col(n,0);
        int i,j;
        for(i=0;i<m;i++){
            for(j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<matrix[i].size();j++){
                if(row[i]==1||col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};