class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int i;
        unordered_set<int>st;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=target[i]){
                st.insert(nums[i]);
            }
        }
        return st.size();
    }
};