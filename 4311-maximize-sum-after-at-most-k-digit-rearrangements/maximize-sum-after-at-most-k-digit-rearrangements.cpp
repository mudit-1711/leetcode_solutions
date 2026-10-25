class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long i,j,n=nums.size(),ans=0;
        for(i=0;i<n;i++)ans+=nums[i];
        vector<int>v;
        for(i=0;i<n;i++){
            string s = to_string(nums[i]);
            sort(s.rbegin(),s.rend());
            int x = stoi(s);
            v.push_back(x-nums[i]);
        }
        sort(v.rbegin(),v.rend());
        for(i=0;i<k;i++)ans+=v[i];
        return ans;
    }
};