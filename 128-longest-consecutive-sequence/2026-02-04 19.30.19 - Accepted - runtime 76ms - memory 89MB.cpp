class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //         sort(nums.begin(),nums.end());
        //         int i,j;
        //         int length=1;
        //         int maxlength=1;
        //         if(nums.size()==0)return 0;
        //         for(i=0;i<nums.size()-1;i++){
        //             if(nums[i]==nums[i+1]-1){
        //                 length++;
        //             }else if(nums[i]==nums[i+1]){
        //             continue ;
        //             }else{
        // length=1;
        //             }
        //             maxlength=max(maxlength,length);
        //         }
        //         return maxlength;
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for (int x : st) {
            if (st.find(x - 1) == st.end()) {
                int curr = x;
                int len = 1;
                while (st.find(curr + 1) != st.end()) {
                len++;
                curr++;
            }
            ans = max(ans, len);
            }
            
            
        }
        return ans;
    }
};