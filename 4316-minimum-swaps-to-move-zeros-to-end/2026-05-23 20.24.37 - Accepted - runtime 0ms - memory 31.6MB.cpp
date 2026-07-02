class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero=0;
        for(auto x : nums){
            if(x==0)zero++;
        }
        int ans =0;
        int n= nums.size();
        for(int i=n-zero;i<n;i++){
            if(nums[i]!=0){
                ans++;
            }
        }
        return ans;
    }
};