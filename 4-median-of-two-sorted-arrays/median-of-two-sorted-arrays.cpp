class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int left = 0, right = 0;
        vector<int> ans;
        while (left < nums1.size() && right < nums2.size()) {
            if (nums1[left] < nums2[right]) {
                ans.push_back(nums1[left]);
                left++;
            } else if (nums1[left] > nums2[right]) {
                ans.push_back(nums2[right]);
                right++;
            } else {
                ans.push_back(nums1[left]);
                ans.push_back(nums2[right]);
                left++;
                right++;
            }
        }
        while (left < nums1.size()) {
            ans.push_back(nums1[left]);
            left++;
        }
        while (right < nums2.size()) {
            ans.push_back(nums2[right]);
            right++;
        }
        int k = ans.size();
        double a;
        if (k % 2 == 1) {
            return ans[k / 2];
        } else {
            return (ans[k / 2 - 1] + ans[k / 2]) / 2.0;
        }
        return -1;
    }
};