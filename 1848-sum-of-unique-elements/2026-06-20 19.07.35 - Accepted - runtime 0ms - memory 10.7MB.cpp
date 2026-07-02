class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int i,j=0;
        map<int,int>mpp;
        for(auto x : nums){
            mpp[x]++;
        }
        for(auto x: mpp){
            if(x.second==1){
                j+=x.first;
            }
        }
        return j;
    }
};