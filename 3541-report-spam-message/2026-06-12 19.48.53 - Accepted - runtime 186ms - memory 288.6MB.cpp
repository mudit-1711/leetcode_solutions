class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int i,j;
        unordered_set<string>s;
        for(auto x :bannedWords ){
            s.insert(x);
        }
        int ans =0;
        for(i=0;i<message.size();i++){
            if(s.find(message[i])!=s.end())ans++;
        }
        return ans>=2;
    }
};