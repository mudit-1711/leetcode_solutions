class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        long long i,j,n=nums.size();
        vector<long long>pref(n+1,0);
        for(i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
        }
        long long ans =0;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                long long sum = pref[j+1]-pref[i];
                if(sum%10!=x)continue;
                long long t = sum;
                while(t>=10)t=t/10;
                if(t==x)ans++;
            }
        }
        return ans;
    }
};