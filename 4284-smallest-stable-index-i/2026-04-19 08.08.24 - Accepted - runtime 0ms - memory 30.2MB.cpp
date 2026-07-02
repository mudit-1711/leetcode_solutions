class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>v;
        int i,j;
       // sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxi = nums[0];
        for(i=0;i<n;i++){
           maxi = max(maxi,nums[i]);
            int mini = nums[i];
            for(j=i;j<n;j++){
                mini = min(mini,nums[j]);
            }
            if(maxi-mini<=k){
                return i;
            }
        }
       return -1;
    }
};