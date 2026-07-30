class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mpp;
        vector<pair<char,int>>v;
        int i,j;
        for(auto x : word){
            mpp[x]++;
        }
        for(auto x : mpp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),[&](auto a , auto b){
            return a.second>b.second;
        });
        int ans =0;
        for(i=0;i<v.size();i++){
            ans+=((v[i].second)*(i/8+1));
        }
        return ans;
    }
};