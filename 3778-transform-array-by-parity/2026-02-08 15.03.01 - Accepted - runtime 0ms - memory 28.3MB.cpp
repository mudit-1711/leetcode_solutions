class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>ans;
        int i,j,x=0,y=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                x++;
            }else{
                y++;
            }
        }
        for(i=1;i<=x;i++){
            ans.push_back(0);
        }
        for(i=1;i<=y;i++){
            ans.push_back(1);
        }
        return ans;
    }
};