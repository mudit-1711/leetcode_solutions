class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long  i,j,sum=0;
        int neg =0;
        int miniabs = INT_MAX;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[i].size();j++){
                int val = matrix[i][j];
                if(val<0){
                  neg++;
                }
                sum+=abs(val);
                miniabs = min(miniabs,abs(val));
            }
        }
        if(neg%2==1){
            sum=sum-2*miniabs;
        }
        return sum;
    }
};