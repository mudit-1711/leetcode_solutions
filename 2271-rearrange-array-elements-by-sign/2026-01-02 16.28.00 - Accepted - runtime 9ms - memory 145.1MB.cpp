class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i, j;
        vector<int> nums1;
        vector<int> nums2;
        vector<int> temp;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                nums1.push_back(nums[i]);

            } else {
                nums2.push_back(nums[i]);
            }
        }
        int l = 0, r = 0;
        while (l < nums1.size() && r < nums2.size()) {
            temp.push_back(nums1[l++]);
            temp.push_back(nums2[r++]);
        }
        while (l < nums1.size()) {
            temp.push_back(nums1[l++]);
        }
        while (r < nums2.size()) {
            temp.push_back(nums2[r++]);
        }
        return temp;
    }
};