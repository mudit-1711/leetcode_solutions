class Solution {
public:
    bool isprime(int& x){
        if(x<2){
            return false;
        }
        for(int i=2;i*i<=x;i++){
            if(x%i==0)return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int>mpp;
        for(auto x : nums){
            mpp[x]++;
        }
        for(auto x : mpp){
            if(isprime(x.second)){
                return true;
            }
        }
        return false;
    }
};