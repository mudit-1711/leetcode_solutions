class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,j;
        int n= nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};