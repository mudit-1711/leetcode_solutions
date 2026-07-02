class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int i,j;
        for(auto x : nums){
            mpp[x]++;
        }
        vector<int>v;
        for(auto x : mpp){
            v.push_back(x.first);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(mpp[v[i]]!=mpp[v[j]])
                return{v[i],v[j]};
            }
        }
        return {-1,-1};
    }
};