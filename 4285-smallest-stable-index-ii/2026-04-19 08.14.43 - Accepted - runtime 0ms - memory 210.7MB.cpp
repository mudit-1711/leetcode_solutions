class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i,j,n=nums.size();
        vector<int> pref(n) ,suff(n);
        pref[0]=nums[0];
        for(i=1;i<n;i++){
            pref[i]=max(pref[i-1],nums[i]);
        }
        suff[n-1]=nums[n-1];
        for(i=n-2;i>=0;i--){
            suff[i]=min(suff[i+1],nums[i]);
        }
        for(i=0;i<n;i++){
            if(pref[i]-suff[i]<=k)return i;
        }
        return -1;
    }
};