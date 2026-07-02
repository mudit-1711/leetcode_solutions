class Solution {
public:
    bool helper(vector<int>& nums, int x) {
        int i, j = 0, sum = 0;
        for (i = x+1; i < nums.size(); i++) {
            if(i==x)continue;
            sum += nums[i];

            j++;
        }
        if(j==0)return false;
        if (nums[x] > (sum / j))
            return true;
        return false;
    }
    int dominantIndices(vector<int>& nums) {
        int i,j=0;
        for(i=0;i<nums.size();i++){
            if(helper(nums ,i))j++;
        }
        return j;
    }
};