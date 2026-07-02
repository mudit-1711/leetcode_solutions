class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        vector<int>v1;
        int i,j;
        vector<int>v2;
        for(i=0;i<n;i++){
            v1.push_back(nums[i]);
        }
        for(i=n;i<n*2;i++){
            v2.push_back(nums[i]);
        }
        for(i=0;i<n;i++){
            ans.push_back(v1[i]);
            ans.push_back(v2[i]);
        }
        return ans;
    }
};