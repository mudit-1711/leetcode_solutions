class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int i, j, area = 0;
        while (left < right) {
            area =
                max(area, (min(height[left], height[right])) * (right - left));
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return area;
    }
};