class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 1e9;
        int i,j;
        int pos=-1;
        for(i=0;i<n;i++){
            if(nums[i]==0)pos=i;
        }
        bool ok =true;
        for(i=0;i<n;i++){
            if(nums[(pos+i)%n]!=i){
                ok = false;
                break;
            }
        }
        if(ok){
            ans =pos;
            if (pos > 0) ans = min(ans, 2 + n - pos);
        }
        
        reverse(nums.begin(),nums.end());
         pos=-1;
        for(i=0;i<n;i++){
            if(nums[i]==0)pos=i;
        }
        ok =true;
        for(i=0;i<n;i++){
            if(nums[(pos+i)%n]!=i){
                ok = false;
                break;
            }
        }
        if(ok){
            ans=min(pos+1,ans);
            ans = min(ans, (n - pos) % n + 1);
        }
        if(ans==1e9)return -1;
        return ans;
    }
};