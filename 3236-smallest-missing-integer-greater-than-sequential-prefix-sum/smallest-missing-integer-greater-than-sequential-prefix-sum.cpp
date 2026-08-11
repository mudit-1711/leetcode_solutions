class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i,j;
        int sum=nums[0];
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }else{
                break;
            }
        }
        unordered_set<int>s(nums.begin(),nums.end());
        while(s.count(sum)){
            sum++;
        }
        return sum;
    }
};