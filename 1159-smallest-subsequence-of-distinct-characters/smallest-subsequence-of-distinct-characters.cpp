class Solution {
public:
    string smallestSubsequence(string s) {
        string ans ;
        int i,j;
        vector<int>freq(26,0);
        vector<bool>seen(26,false);
        for(auto c : s){
            freq[c-'a']++;
        }
        for(auto x : s){
            freq[x-'a']--;
            if(seen[x-'a'])continue;
            while(!ans.empty()&&ans.back()>x&&freq[ans.back() - 'a'] > 0){
                seen[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(x);
            seen[x-'a']=true;
        }
        return ans;
    }
};