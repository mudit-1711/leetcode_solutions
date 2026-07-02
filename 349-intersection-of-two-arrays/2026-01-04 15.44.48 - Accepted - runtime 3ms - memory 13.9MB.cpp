class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int n1 = nums1.size(), n2 = nums2.size();
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};