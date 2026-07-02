class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int i,j;
        vector<vector<int>>v(strs.size(),vector<int>(26,0));
        int idx=0;
        for(i=0;i<strs.size();i++){
            string s = strs[i];
            for(j=0;j<s.size()&&idx<strs.size();j++){
                v[idx][s[j]-'a']++;
            }
            idx++;
        }
        vector<int>vis(strs.size(),0);
        for(i=0;i<strs.size();i++){
            if(vis[i])continue;
            vector<string>curr;
            curr.push_back(strs[i]);
            vis[i]=1;
            for ( j = i + 1; j <strs.size() ; j++) {
                if (!vis[j] && v[i] == v[j]) {
                    curr.push_back(strs[j]);
                    vis[j] = 1;
                }
            }
            ans.push_back(curr);
        }
        return ans;
    }
};