class Solution {
public:
    void f(string&s,vector<string>&ans,int idx){
        if(idx==s.size()){
            ans.push_back(s);
            return ;
        }
        if(isdigit(s[idx])){
            f(s,ans,idx+1);
            return ;
        }
        s[idx]=tolower(s[idx]);
        f(s,ans,idx+1);
        s[idx]=toupper(s[idx]);
        f(s,ans,idx+1);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        f(s,ans,0);
        return ans;
    }
};