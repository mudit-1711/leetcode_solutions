class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return false;
        int i=0,j;
        while(i+1<n&&nums[i]<nums[i+1]){
            i++;
        }
        if(i==0)return false;
        int p = i;
        while(i+1<n&&nums[i]>nums[i+1]){
            i++;
        }
        if(p==i)return false;
          int q = i;
          while(i+1<n&&nums[i]<nums[i+1]){
            i++;
          }
          if(q==i)return false;
          return i==n-1;
    }
};