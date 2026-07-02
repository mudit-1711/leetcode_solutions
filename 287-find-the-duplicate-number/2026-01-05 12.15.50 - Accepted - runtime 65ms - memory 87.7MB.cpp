class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_set<int> st;
        for(int i : nums){
            if(st.count(i)>0){
                return i;
            }else{
                st.insert(i);
            }
        }
        return 0;
    }
};