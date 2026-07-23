class Solution {
    public int uniqueXorTriplets(int[] nums) {
        int i, j, ans = 0;
        if (nums.length <= 2)
            return nums.length;
        for (i = 0; i < nums.length; i++) {
            ans |= nums[i];
        }
        return ans + 1;
    }
}