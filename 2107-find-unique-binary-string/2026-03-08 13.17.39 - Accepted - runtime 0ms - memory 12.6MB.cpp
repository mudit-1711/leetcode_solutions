class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        int i,j;
        for(i=0;i<nums.size();i++){
            if(nums[i][i]=='0'){
                ans+='1';
            }else{
                ans+='0';
            }
        }
        return ans;
    }
};