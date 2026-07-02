class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int i,j;
        vector<int>ans=nums;
        vector<int>newi=nums;
        reverse(newi.begin(),newi.end());
        for(i=0;i<nums.size();i++){
            ans.push_back(newi[i]);
        }
        return ans;
    }
};