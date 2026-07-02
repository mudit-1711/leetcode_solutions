class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0,j=0;
        bool found = false;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j]){
                found = true;
                return nums1[i];
            }else if(nums1[i]<nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        // if(nums1.size()<nums2.size()&&!found){
        //     return nums2[++j];
        // }
        // if(nums1.size()>nums2.size()&&!found){
        //     return nums1[++i];
        // }
        return -1;
    }
};