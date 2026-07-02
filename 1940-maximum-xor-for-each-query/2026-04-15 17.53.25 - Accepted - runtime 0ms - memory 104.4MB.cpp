class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maxi) {
        vector<int>pref(nums.size());
        vector<int>ans;
        pref[0]=nums[0];
        int i,j;
        for(i=1;i<nums.size();i++){
            pref[i]=pref[i-1]^nums[i];
        }
        int v= int(pow(2,maxi)-1);
        for(i=pref.size()-1;i>=0;i--){
            int k = pref[i]^(v);
            ans.push_back(k);
        }
        return ans;
    }
};