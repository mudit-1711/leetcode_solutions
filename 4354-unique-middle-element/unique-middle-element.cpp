class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int i,j,n=nums.size();
        int mid=nums[(n/2)];
        int freq=0;
        for(auto x : nums){
            if(x==mid)freq++;
        }
        return freq==1;
    }
};