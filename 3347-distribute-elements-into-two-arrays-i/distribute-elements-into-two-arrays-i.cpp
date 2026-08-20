class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1,arr2;
        arr1.push_back(nums[0]);
         arr2.push_back(nums[1]);
         int i,j;
         int idx1=0,idx2=0;
         for(i=2;i<nums.size();i++){
            if(arr1[idx1]>arr2[idx2]){
                arr1.push_back(nums[i]);
                idx1++;
            }else{
                arr2.push_back(nums[i]);
                idx2++;
            }
         }
         vector<int>ans;
         for(i=0;i<arr1.size();i++)ans.push_back(arr1[i]);
         for(i=0;i<arr2.size();i++)ans.push_back(arr2[i]);
         return ans;
    }
};