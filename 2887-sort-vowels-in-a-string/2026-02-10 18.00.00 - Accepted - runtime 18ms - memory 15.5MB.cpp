class Solution {
public:
    bool isvowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    string sortVowels(string s) {
        vector<char> vowels;
        for (char ch : s) {
            if(isvowel(ch)){
                vowels.push_back(ch);
            }
        }
        sort(vowels.begin(),vowels.end());
        int j=0;
        for(int i =0;i<s.length();i++){
            if(isvowel(s[i])){
                s[i]=vowels[j++];
            }
        }
        return s;
        // for (int i = 0; i < s.length(); i++) {
        //     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        //         s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
        //         s[i] == 'O' || s[i] == 'U') {
        //         for (int j = 0; j < s.length(); j++) {
        //             if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' ||
        //                 s[j] == 'o' || s[j] == 'u' || s[j] == 'A' ||
        //                 s[j] == 'E' || s[j] == 'I' || s[j] == 'O' ||
        //                 s[j] == 'U') {
        //                 if (s[i] < s[j]) {
        //                     swap(s[i], s[j]);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return s;
    }
};