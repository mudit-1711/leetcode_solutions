class Solution {
public:
    int f(vector<int>& nums,int i,int j){
        if(i==j)return nums[i];
        int left=nums[i]-f(nums,i+1,j);
        int right=nums[j]-f(nums,i,j-1);
        return max(left,right);

    }
    bool predictTheWinner(vector<int>& nums) {
        return f(nums,0,nums.size()-1)>=0;
    }
};