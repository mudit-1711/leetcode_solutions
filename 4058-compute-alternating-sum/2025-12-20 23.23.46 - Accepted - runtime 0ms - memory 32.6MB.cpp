class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sume=0,sumo=0,i,j;
        for(i=0;i<nums.size();i++){
            if(i%2==0){
                sume+=nums[i];
            }else{
                sumo+=nums[i];
            }
        }
        int ans = sume-sumo;
        return ans;
    }
};