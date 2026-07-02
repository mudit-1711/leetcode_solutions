class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int i,j;
        int num=1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        int top =0,bottom=n-1,right=n-1,left=0;
        while(left<=right&&top<=bottom){
            for(i=left;i<=right;i++){
                 ans[top][i]=num;
                 num++;
            }
            top++;
            for(i=top;i<=bottom;i++){
                ans[i][right]=num;
                num++;
            }
            right--;
            if(top<=bottom){
                for(i=right;i>=left;i--){
                    ans[bottom][i]=num;
                    num++;
                }
                bottom--;
            }
            if(left<=right){
                for(i=bottom;i>=top;i--){
                    ans[i][left]=num;
                    num++;
                }
                left++;
            }
        }
        return ans;
    }
};