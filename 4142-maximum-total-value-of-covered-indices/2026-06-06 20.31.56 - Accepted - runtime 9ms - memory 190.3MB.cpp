class Solution {
public:
    long long maxTotal(vector<int>& nums, string s) {
        long long i;
        int n = nums.size();
        long long ans =0;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                int j=i;
                int mn = nums[i];
                long long sum=0;
                if(i>0){
                    mn=min(mn,nums[i-1]);
                    sum+=nums[i-1];
                }
               while(j<n&&s[j]=='1'){
                   mn=min(mn,nums[j]);
                       ans+=nums[j];
                       j++;
                   }
                if(i>0){
                    ans+=(sum-mn);
                }else{
                    ans+=sum;
                }
                i=j-1;
            }
        }
        return ans;
    }
};