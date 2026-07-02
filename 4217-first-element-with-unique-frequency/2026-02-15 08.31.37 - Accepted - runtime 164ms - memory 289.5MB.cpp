class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto it:nums){
            freq[it]++;
        }
        int i,j;
         unordered_map<int,int>freqsame;
        for(auto it:freq){
            freqsame[it.second]++;
        }
        for(auto x : nums){
            if(freqsame[freq[x]]==1){
                return x;
            }
        }
        return -1;
    }
};