class Solution {
public:
    int maximumWidth(vector<int>& p) {
        map<int,int>res,c;
        int i,j;
        for(auto x : p){
            c[x]++;
        }
        vector<long long>val;
        for(auto x : c){
            val.push_back(x.first);
            res[x.first]+=x.second;
            res[2*x.first]+=x.second/2;
        }
        for(i=0;i<val.size();i++){
            for(j=i+1;j<val.size();j++){
                res[val[i]+val[j]]+=min(c[val[i]],c[val[j]]);
            }
        }
        int ans =0;
        for(auto x : res){
            ans=max(ans,x.second);
        } 
        return ans;
    }
};