class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char>v;
        vector<int>pos;
        for(int i =0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||s[i]>='A'&&s[i]<='Z'){
                v.push_back(s[i]);
                pos.push_back(1);
            }else{
                pos.push_back(0);
            }
        }
        reverse(v.begin(),v.end());
        int idx=0;
        for(int i = 0;i<s.size();i++){
            if(pos[i]==0){
                continue;
            }else{
                s[i]=v[idx++];
            }
        }
        return s;
    }
};