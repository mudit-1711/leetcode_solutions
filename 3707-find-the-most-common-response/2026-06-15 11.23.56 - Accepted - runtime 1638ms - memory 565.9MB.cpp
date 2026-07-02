class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        int i,j;
        vector<string>v;
        for(i=0;i<responses.size();i++){
            set<string>temp;
            for(j=0;j<responses[i].size();j++){
                temp.insert(responses[i][j]);
            }
            for(auto x : temp){
                v.push_back(x);
            }
        }
        map<string,int>mpp;
        for(auto x : v){
            mpp[x]++;
        }
        int maxi = -1;
        for(auto x : mpp){
            if(x.second>maxi){
                maxi=x.second;
            }
        }
        vector<string>ans;
        for(auto x : mpp){
            if(x.second==maxi){
                ans.push_back(x.first);
            }
        }
        if(ans.size()==1){
            return ans[0];
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};