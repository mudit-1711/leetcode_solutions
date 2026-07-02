class Solution {
public:
    int rev (int x){
        int ans =0;
        while(x>0){
            ans = ans*10 + x%10;
            x=x/10;
        }
        return ans;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int i,j;
        map<int,int>mpp;
        int ans = INT_MAX;
        for(i=0;i<nums.size();i++){
            if(mpp.count(nums[i])){
                ans = min(ans,i-mpp[nums[i]]);
            }
                mpp[rev(nums[i])]=i;
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};