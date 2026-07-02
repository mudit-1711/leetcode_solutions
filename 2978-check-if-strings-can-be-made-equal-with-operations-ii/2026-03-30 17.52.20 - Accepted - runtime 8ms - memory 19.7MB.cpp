class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>s1odd(26,0);
        vector<int>s1even(26,0);
        vector<int>s2odd(26,0);
        vector<int>s2even(26,0);
        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                s1even[s1[i]-'a']++;
                s2even[s2[i]-'a']++;
            }else{
                s1odd[s1[i]-'a']++;
                s2odd[s2[i]-'a']++;
            }
        }
        return(s1even==s2even)&&(s1odd==s2odd);
    }
};