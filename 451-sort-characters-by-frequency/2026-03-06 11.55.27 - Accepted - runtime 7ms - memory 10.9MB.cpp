class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        int i,j;
        unordered_map<char,int>mpp;
        for(i=0;i<s.size();i++){
          mpp[s[i]]++;
        }
        vector<pair<char ,int>>vt(mpp.begin(),mpp.end());
        sort(vt.begin(),vt.end(),[]( pair<char ,int>&a, pair<char ,int>&b){
             return a.second> b.second;
        });
        for(auto x : vt){
            for(i=0;i<x.second;i++){
            ans+=x.first;
            }
        }
        return ans;
    }
};