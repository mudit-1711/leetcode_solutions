class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int i=0,j=0;
        while(i<nums.size()&&j<nums.size()){
            if(nums[j]>nums[i]){
                count++;
                i++;
                j++;
            }else{
            j++;
            }
        }
        return count;
    }
};