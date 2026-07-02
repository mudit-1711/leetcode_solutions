class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int i,j;
        int p=0;
        for(i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                p=i;
            }else{
                break;
            }
        }
        long long asum =0 ,dsum=0;
        for(i=0;i<=p;i++){
            asum+=nums[i];
        }
        for(i=p;i<nums.size();i++){
            dsum+=nums[i];
        }
        if(asum>dsum)return 0;
        if(dsum>asum)return 1;
        return -1;
    }
};