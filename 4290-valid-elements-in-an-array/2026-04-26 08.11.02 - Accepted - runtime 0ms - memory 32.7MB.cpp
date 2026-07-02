class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> ans;
        int i,j;
        int n = nums.size();
        vector<int> left(n,INT_MIN);
        vector<int> right(n,INT_MIN);
        if(n==1)return nums;
        for(i=1;i<n;i++){
            left[i]=max(left[i-1],nums[i-1]);
        }
        for(i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i+1]);
        }
        for(i=0;i<n;i++){
            if(i==0||i==n-1||nums[i]>left[i]||nums[i]>right[i]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};