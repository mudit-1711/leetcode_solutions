class Solution {
public:
    int minOperations(string s) {
        int ans =0;
        for(auto c :s){
            int d= (26-(c-'a'))%26;
            ans=max(ans,d);
        }
        return ans;
    }
};