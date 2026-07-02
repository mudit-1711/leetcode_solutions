class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j;
        for(i=0;i<nums.size();){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
            }else{
                i++;
            }
        }
        return nums.size();
    }
};