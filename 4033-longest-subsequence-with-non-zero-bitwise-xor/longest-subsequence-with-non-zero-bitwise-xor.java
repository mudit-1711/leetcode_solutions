class Solution {
    public int longestSubsequence(int[] nums) {
        int i,j,x=0;
        int n = nums.length;
        boolean nonzero = false;
        for(i=0;i<n;i++){
            x^=nums[i];
            if(nums[i]!=0)nonzero=true;
        }
        if(x!=0)return n;
        if(nonzero)return n-1;
        return 0;
    }
}