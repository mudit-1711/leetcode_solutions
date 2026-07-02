class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        vector<int> small;
        vector<int> equal;
        vector<int> big;
        int i,j;
        for(i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                small.push_back(nums[i]);
            }else if ( nums[i]==pivot){
                equal.push_back(nums[i]);
            }else{
                big.push_back(nums[i]);
            }
        }
        //ans = small+equal+big;
        for(int x : small)ans.push_back(x);
        for(int x : equal)ans.push_back(x);
        for(int x : big)ans.push_back(x);
        return ans;
    }
};