class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        stack<long long > st;
     
        for (long long x : nums) {
            while(!st.empty()&&st.top()==x){
                x = x + st.top();
                st.pop();
            }
            st.push(x);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};