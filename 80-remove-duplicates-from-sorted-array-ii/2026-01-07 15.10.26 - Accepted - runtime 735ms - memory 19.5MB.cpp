class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j;
        while(i<nums.size()){
            int count=0;
            for(j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>2){
                nums.erase(nums.begin()+i);
            }else{
                i++;
            }
        }
        return nums.size();
    }
};