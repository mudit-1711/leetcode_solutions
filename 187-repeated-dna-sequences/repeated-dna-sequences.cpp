class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        int i,j;
        map<string,int>mpp;
        if(s.size()<10)return ans;
        for(i=0;i<=s.size()-10;i++){
            string temp = s.substr(i,10);
            mpp[temp]++;
        }
        for(auto x : mpp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};