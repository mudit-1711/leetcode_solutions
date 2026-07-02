class Solution {
public:
     bool isvowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    string sortVowels(string s) {
        vector<char> vowels;
        unordered_map<char,int> freq, firstPos;
        for (char ch : s) {
            if(isvowel(ch)){
                vowels.push_back(ch);
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (isvowel(s[i])) {
                freq[s[i]]++;
                if (!firstPos.count(s[i])) {
                    firstPos[s[i]] = i;
                }
            }
        }
        sort(vowels.begin(), vowels.end(), [&](char a, char b) {
            if (freq[a] != freq[b])
                return freq[a] > freq[b];   
            return firstPos[a] < firstPos[b];
        });
        int j=0;
        for(int i =0;i<s.length();i++){
            if(isvowel(s[i])){
                s[i]=vowels[j++];
            }
        }
        return s;
    }
};