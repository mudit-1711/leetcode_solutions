class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i=nums1.size()-1,j=nums2.size()-1;
        int d =0;
        while(i>=0&&j>=0){
            if (i > j) {  
                i--;       
                continue;
            }
            if(nums1[i]>nums2[j]){
                j--;
            }else{
                d = max(d,j-i);
                i--;
            }
        }
        return d;
    }
};