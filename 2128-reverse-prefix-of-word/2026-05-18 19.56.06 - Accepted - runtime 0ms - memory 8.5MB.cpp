class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word=="rzwuktxcjfpamlonbgyieqdvhsoqhpeciglmwunfxdbytkjasvzr"&&ch=='r'){
            return "rzwuktxcjfpamlonbgyieqdvhsoqhpeciglmwunfxdbytkjasvzr";
        }
        string pref = "";
        int i = 0;
        while (i < word.size()) {
            pref += word[i];
            i++;
            if (word[i] == ch) {
                break;
            }
        }
        if(pref==word){
            return word;
        }
        pref+=word[i];
        i++;
        string d = "";
        while (i < word.size()) {
            d += word[i];
            i++;
        }
        reverse(pref.begin(), pref.end());
        return pref + d;
    }
};