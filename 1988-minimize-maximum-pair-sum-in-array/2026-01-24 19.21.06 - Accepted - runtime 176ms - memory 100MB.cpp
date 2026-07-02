class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int answer=0;
        sort(nums.begin(),nums.end());
        while(left<right){
            answer = max(answer,nums[left]+nums[right]);
            left++;
            right--;
        }
        return answer;
    }
};