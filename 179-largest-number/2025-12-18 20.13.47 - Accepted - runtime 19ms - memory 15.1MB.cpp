class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int i,j;
        int n= nums.size();
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                string a = to_string(nums[j]);
                string b = to_string(nums[j+1]);
                if(a+b<b+a){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        if(nums[0]==0){
            return "0";
        }
        string ans="";
        for(i=0;i<n;i++){
            ans+=to_string(nums[i]);
        }
        return ans;
    }
};