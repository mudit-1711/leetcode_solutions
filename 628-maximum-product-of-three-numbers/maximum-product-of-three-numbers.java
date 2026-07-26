class Solution {
    public int maximumProduct(int[] nums) {
        int mx1 = -1001, mx2 = -1001, mx3 = -1001;
        int mn1 = 1001, mn2 = 1001;

        for (int num : nums) {
            if (num >= mx1) {
                mx3 = mx2;
                mx2 = mx1;
                mx1 = num;
            }
            else if (num >= mx2) {
                mx3 = mx2;
                mx2 = num;
            }
            else if (num > mx3) {
                mx3 = num;
            }
            if (num <= mn1) {
                mn2 = mn1;
                mn1 = num;
            }
            else if (num < mn2) {
                mn2 = num;
            }
        }
        return Math.max(mx1 * mx2 * mx3, mx1 * mn1 * mn2);
    }
}