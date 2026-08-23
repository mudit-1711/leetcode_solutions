class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int l, int u) {
        vector<vector<int>> ans;
        int i,j;
        unordered_set<int>st;
        for(auto x:nums ){
            st.insert(x);
        }
        for(i=l;i<=u;i++){
            if(!st.count(i)){
            int start = i;
            while(i<=u&&!st.count(i)){
                i++;
            }
            
                ans.push_back({start,i-1});
            }
            
        }
        return ans;
    }
};