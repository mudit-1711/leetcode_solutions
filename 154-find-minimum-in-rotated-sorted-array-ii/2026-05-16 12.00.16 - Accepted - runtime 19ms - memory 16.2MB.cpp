class Solution {
public:
    void rot(vector<int>&v){
        v.push_back(v[0]);
        v.erase(v.begin());
    }
    int findMin(vector<int>& nums) {
        int i,j;
        while(!is_sorted(nums.begin(),nums.end())){
            rot(nums);
        }
        return nums[0];
    }
};