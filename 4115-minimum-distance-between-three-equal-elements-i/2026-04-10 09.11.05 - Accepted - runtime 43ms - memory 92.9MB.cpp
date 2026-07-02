class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<int>v;
        int i,j,k;
        int ans = INT_MAX;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                for(k=j+1;k<nums.size();k++){
                    if((nums[i]==nums[j])&&(nums[j]==nums[k])){
                       int   c = abs(i-j)+abs(j-k)+abs(k-i);
                       ans=min(ans,c);
                    }
                    v.push_back(ans);
                }
            }
        }
        //sort(v.begin(),v.end());
        return (ans == INT_MAX ? -1 : ans);
    }
};