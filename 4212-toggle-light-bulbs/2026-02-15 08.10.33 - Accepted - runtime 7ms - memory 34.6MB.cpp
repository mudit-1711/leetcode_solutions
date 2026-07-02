class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans;
        int i,j;
        unordered_map<int,int>mpp;
        for(int x:bulbs){
            mpp[x]++;
        }
        for(auto it: mpp){
            if(it.second%2==1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};