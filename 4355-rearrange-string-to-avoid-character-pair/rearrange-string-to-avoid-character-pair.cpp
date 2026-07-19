class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans ="";
        int i,j;
        vector<int>freq(26,0);
        for(auto c : s){
            freq[c-'a']++;
        }
        for(auto c = 'a';c<='z';c++){
            if(x==c||y==c)continue;
            ans.append(freq[c-'a'],c);
        }
        ans.append(freq[y-'a'],y);
        ans.append(freq[x-'a'],x);
        return ans;
    }
};