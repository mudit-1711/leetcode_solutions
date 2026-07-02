class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int i,j;
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto x : mpp){
            int q = x.first;
            int p = x.second;
            v.push_back({q,p});
        }
        sort(v.begin(),v.end(),[&](auto a ,auto b){
            if(a.second==b.second){
                return a.first>b.first;
            }else{
                 return a.second<b.second;
            }
        });
        for(auto x : v){
            int z = x.second;
            while(z--){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};