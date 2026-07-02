class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sume=0,sumd=0;
        int i,j,k,m;
        int n = nums.size();
        for(i=0;i<n;i++){
            sume+=nums[i];
        }
        for(i=0;i<n;i++){
            while(nums[i]!=0){
            m=nums[i]%10;
            sumd=sumd+m;
            nums[i]/=10;
            }
            
        }
        int ans=abs(sumd-sume);
        return ans;
    }
};