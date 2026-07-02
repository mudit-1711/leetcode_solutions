class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i,j;
        int n = nums.size();
        if(n==1)return nums[0];
        while(n>1){
            vector<int>newnums(n-1);
            if(n==1)return newnums[0];
                for(i=0;i<n-1;i++){
                    newnums[i]=(nums[i]+nums[i+1])%10;
                }
                nums=newnums;
                n--;
            }
        
        return nums[0];
    }
};