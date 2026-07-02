class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
     int i,j;
       int  m = matrix.size();
      int  n = matrix[i].size();
      
      for(i=1;i<m;i++){
        for(j=1;j<n;j++){
          if((matrix[i][j]!=matrix[i-1][j-1])){
            return false;
          }
        }
      }
      return true ;
    }
};