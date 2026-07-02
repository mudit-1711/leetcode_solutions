class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        int i,j;
        sort(tasks.begin(),tasks.end(),[](auto &a,auto &b){
            return a[1]-a[0]>b[1]-b[0];
        });
        int ans =0;
        int e=0;
        for(i=0;i<tasks.size();i++){
            int a =tasks[i][0];
            int mini =tasks[i][1];
            if(e<mini){
                ans+=(mini-e);
                e=mini;
            }
            e-=a;
        }
        return ans;
    }
};