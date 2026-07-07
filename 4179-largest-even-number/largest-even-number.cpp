class Solution {
public:
    string largestEven(string s) {
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                s.pop_back();
            }else{
                return s;
            }
        }
        return "";
    }
};