class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j;
        int ans=0;
        int n =nums.size();
        for(j=0;j<n;j++){
            while((long long)nums[j]>k*(long long)nums[i]){
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return n- ans;
    }
};