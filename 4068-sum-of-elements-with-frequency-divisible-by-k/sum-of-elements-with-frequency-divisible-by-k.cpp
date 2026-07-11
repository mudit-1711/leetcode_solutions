class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int i,j;
        unordered_map<int,int>mpp;
        int sum=0;
        for(auto x : nums){
            mpp[x]+=1;
        }
        for(auto x : mpp){
            if(x.second%k==0)sum+=(x.first*x.second);
        }
        return sum;
    }
};