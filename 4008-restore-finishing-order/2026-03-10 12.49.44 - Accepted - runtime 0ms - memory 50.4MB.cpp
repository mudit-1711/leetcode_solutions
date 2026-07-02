class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int>st(friends.begin(),friends.end());
        int i,j;
        vector<int>ans;
        for(i=0;i<order.size();i++){
            if(st.count(order[i])){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};