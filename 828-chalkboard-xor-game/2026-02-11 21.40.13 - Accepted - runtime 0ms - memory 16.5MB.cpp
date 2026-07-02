class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int xoor=0;
        for(int i =0;i<nums.size();i++){
            xoor=xoor^nums[i];
        }
        return xoor==0||nums.size()%2==0;
    }
};