class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int c=0;
        int prev=-1;
        for(auto x : nums){
            if(x>=prev){
                prev=x;
                c++;
            }
        }
        return c;
    }
};