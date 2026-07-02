class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> vel = nums; 
        
        int n = vel.size();
        vector<int> pre(n);
        
        int mx = vel[0];
        for(int i = 0; i < n; i++){
            mx = max(mx, vel[i]);
            pre[i] = gcd(vel[i], mx);
        }
        
        sort(pre.begin(), pre.end());
        
        int l = 0, r = n - 1;
        long long ans = 0;
        
        while(l < r){
            ans += gcd(pre[l], pre[r]);
            l++;
            r--;
        }
        
        return ans;
    }
};