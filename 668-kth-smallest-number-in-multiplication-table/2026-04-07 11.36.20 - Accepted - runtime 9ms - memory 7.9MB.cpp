class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int i,j;
        int low =1,high = m*n;
        while(low<=high){
            int mid = low + (high-low)/2;
            int count =0;
            for(i=1;i<=m;i++){
                count+=min(mid/i,n);
            }
             if (count < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};