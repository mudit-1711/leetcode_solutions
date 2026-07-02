class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        int i,j;
        ans.push_back(pref[0]);
        for(i=1;i<pref.size();i++){
            ans.push_back(pref[i]^pref[i-1]);
        }
        return ans;
    }
};