class Solution {
public:
    bool isvalid(string s){
        int i,j;
        for(i=0;i<s.size()-1;i++){
            string temp = s.substr(i,2);
            if(temp[0]=='0'&&temp[1]=='0'){
                return false;
            }
        }
        return true;
    }
    vector<string>ans;
    void gen(int n , string s ){
        if(s.size()==n){
            if(isvalid(s)){
                ans.push_back(s);
            }
            return ;
        }
        gen(n,s+'1');
        gen(n,s+'0');
    }
    vector<string> validStrings(int n) {
        gen(n,"");
        return ans;
    }
};