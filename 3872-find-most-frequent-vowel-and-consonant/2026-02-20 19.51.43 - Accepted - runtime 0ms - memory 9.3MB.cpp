class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> vo(26, 0);
        vector<int> co(26, 0) ;
        for (auto x : s) {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
               vo[x-'a']++;
            }else{
                co[x-'a']++;
            }
        }
        return *max_element(vo.begin(),vo.end())+*max_element(co.begin(),co.end());
    }
};