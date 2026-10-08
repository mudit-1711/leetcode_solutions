class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int b=0;
        for(auto c : s){
            if(c=='('){
                if(b>0)ans.push_back(c);
                b++;
            }else{
                b--;
                if(b>0){
                ans.push_back(c);
            }
            }
        }
        return ans;
    }
};