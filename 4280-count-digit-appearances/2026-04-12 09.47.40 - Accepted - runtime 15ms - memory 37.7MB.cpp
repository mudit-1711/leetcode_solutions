class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        map<int,int>mpp;
        for(int i =0;i<nums.size();i++){
            int num = nums[i];
            while(num>0){
                int d = num%10;
                mpp[d]++;
                num=num/10;
            }
        }
        return mpp[digit];
    }
};