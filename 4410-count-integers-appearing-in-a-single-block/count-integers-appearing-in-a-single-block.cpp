class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int i,j=0;
        map<int,int>mpp;
        for(auto x : nums)mpp[x]++;
        for(i=0;i<nums.size();i++){
            int freq = mpp[nums[i]];
            int curr=nums[i];
            int a =0;
            while(i<nums.size()&&curr==nums[i]){
                a++;
                i++;
            }
            if(a==freq)j++;
            i--;
        }
        return j;
    }
};