class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int i,j;
        int ans=0;
        for(i=0;i<nums.size();i++){
            int even=0,odd=0;
            for(j=i;j<nums.size();j++){
                if(nums[j]%2==0)even++;
                else odd++;
                if(odd>0&&1LL*even*b<=1LL*odd*a)ans++;
            }
        }
        return ans;
    }
};