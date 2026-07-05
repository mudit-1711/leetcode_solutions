class Solution {
public:
    int f(int x){
        int i,j,n;
        if(x==0)return 0;
        vector<int>nums;
        while(x>0){
            nums.push_back(x%10);
            x=x/10;
        }
        n=nums.size();
        sort(nums.begin(),nums.end());
        int mx=nums[n-1];
        int mn = nums[0];
        int r = mx-mn;
        return r;
    }
    int maxDigitRange(vector<int>& nums) {
        int i,j,n=nums.size();
        int ans =0;
       int r=0;
        for(auto x : nums){
            r=max(r,f(x));
        }
        for(auto x : nums){
            if(f(x)==r)ans+=x;
        }
        return ans;
    }
};