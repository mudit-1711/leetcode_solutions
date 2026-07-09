class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool>ans;
        int i,j;
        vector<int>group(n,0);
        int curr=0;
        for(i=1;i<n;i++){
            if((nums[i]-nums[i-1])>maxDiff){
                curr++;
            }
             group[i]=curr;
        }
        for(i=0;i<queries.size();i++){
            int a = queries[i][0];
            int b = queries[i][1];
            ans.push_back(group[a]==group[b]);
        }
        return ans;
    }
};