class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftmax = 0, rightmax = 0;
        int area = 0;
        while (left < right) {
            if (height[left] <= height[right]) {
                if (height[left] > leftmax) {
                    leftmax = height[left];
                } else {
                    area += leftmax - height[left];
                }
                left++;
            } else {
                if(height[right]>=rightmax){
                    rightmax=height[right];
                }else{
                    area+=rightmax-height[right];
                }
                right--;
            }
        }
        return area;
    }
};