class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int i,j,n=nums.size();
        vector<long long>pref(n);
        pref[0]=nums[0];
        for(i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
        int ans =0;
        long long tot = pref[n-1];
        int m = n/2;
        for(i=0;i<n;i++){
            long long temp;
            if(i+m-1<n){
                temp=pref[i+m-1]-(i>0?pref[i-1]:0);
            }else{
                temp = tot-(i>0?pref[i-1]:0);
                temp+=pref[(i+m-1)%n];
            }
            if(temp>tot-temp)ans+=1;
        }
        return ans;
    }
};