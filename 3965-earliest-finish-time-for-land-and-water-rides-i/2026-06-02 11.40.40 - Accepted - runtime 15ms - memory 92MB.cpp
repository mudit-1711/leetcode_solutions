class Solution {
public:
    int earliestFinishTime(vector<int>& lst, vector<int>& ldu, vector<int>& wst,
                           vector<int>& wdu) {

        int ans = INT_MAX;

        for (int i = 0; i < lst.size(); i++) {
            int t = lst[i] + ldu[i];

            for (int j = 0; j < wst.size(); j++) {
                ans = min(ans, max(t, wst[j]) + wdu[j]);
            }
        }

        for (int i = 0; i < wst.size(); i++) {
            int t = wst[i] + wdu[i];

            for (int j = 0; j < lst.size(); j++) {
                ans = min(ans, max(t, lst[j]) + ldu[j]);
            }
        }

        return ans;
    }
};