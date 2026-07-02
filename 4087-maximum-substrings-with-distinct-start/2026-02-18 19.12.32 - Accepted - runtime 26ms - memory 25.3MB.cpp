class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<int>st;
        for(auto x : s){
            st.insert(x);
        }
        return st.size();
    }
};