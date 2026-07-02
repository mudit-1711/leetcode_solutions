class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mpp;//num,freq;
        int i,j;
        for(auto x : nums){
            if(x%2==0){
                mpp[x]++;
            }
        }
        int c = -1;
        int num = -1;

        for(auto x : mpp){
            if(x.second > c){
                c = x.second;
                num = x.first;
            }
            else if(x.second == c){
                num = min(num, x.first);
            }
        }
        return num;
    }
};