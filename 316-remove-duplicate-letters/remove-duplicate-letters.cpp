class Solution {
public:
    string removeDuplicateLetters(string s) {
        int i,j;
        string ans ="";
        vector<int>freq(26,0);
        vector<bool>see(26,false);
        for(auto x :s){
            freq[x-'a']++;
        }
        for(auto x : s){
            freq[x-'a']--;
            if(see[x-'a'])continue;
            while(!ans.empty()&&ans.back()>x&&freq[ans.back()-'a']>0){
                see[ans.back()-'a']=false;
                ans.pop_back();
            }
            see[x-'a']=true;
            ans.push_back(x);
        }
        return ans;
    }
};