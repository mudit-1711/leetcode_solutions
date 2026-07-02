class Solution {
public:
     vector<string>res;
     void helper(int n, string s){
        if(n==s.size()){
            res.push_back(s);
            return;
        }
        for(auto c : {'a','b','c'}){
            if(s.empty()||s.back()!=c){
                helper(n,s+c);
            }
        }
     }
    string getHappyString(int n, int k) {
        helper(n,"");
        if(k>res.size())return "";
        return res[k-1];
    }
};