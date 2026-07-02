class Solution {
public:
    int passwordStrength(string p) {
        set<char>low;
        set<char>upp;
        set<int>num;
        set<char>s;
        int ans =0;
        for(auto x : p){
            if(x>='a'&&x<='z'){
                low.insert(x);
            }else if(x>='A'&&x<='Z'){
                upp.insert(x);
            }else if(x>='0'&&x<='9'){
                num.insert(x);
            }else{
                s.insert(x);
            }
        }
        return low.size()+2*upp.size()+3*num.size()+5*s.size();
    }
};