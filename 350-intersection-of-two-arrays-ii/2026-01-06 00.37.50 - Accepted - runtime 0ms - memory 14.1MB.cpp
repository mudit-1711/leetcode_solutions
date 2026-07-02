class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int l=0,r=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int n1=nums1.size(),n2=nums2.size();
        while(l<n1&&r<n2){
               if(nums1[l]>nums2[r]){
                r++;     
               }else if(nums1[l]<nums2[r]){
                l++;
               }else{
                ans.push_back(nums1[l]);
                l++;
                r++;
               }
        }
        return ans;
    }
};