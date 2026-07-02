class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      
        int low =1;
        int i;
        int high = *max_element(nums.begin(),nums.end());
        int ans =high;
        while(low<=high){
           long long  sum=0;
            int mid=(low+high)/2;
             for(i=0;i<nums.size();i++){
                sum+=(nums[i]+mid-1)/mid;
             }
             if(sum<= threshold){
                ans =mid;
                high=mid-1;
             }else{
                low=mid+1;
             }
        }
        return ans;
    }
};