class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1,i,j,k,n=nums.size();

        for(i=0;i<n;i++){
            vector<int>v;
            v.push_back(nums[i]);

            bool inc=true,dec=true;

            for(j=i+1;j<n;j++){
                if(nums[j]>nums[j-1] && inc){
                    v.push_back(nums[j]);
                    dec=false;
                }
                else if(nums[j]<nums[j-1] && dec){
                    v.push_back(nums[j]);
                    inc=false;
                }
                else{
                    break;
                }
            }

            ans=max(ans,int(v.size()));
        }

        return ans;
    }
};