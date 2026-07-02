class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int s = ceil(pow(l,1.0/k)-1e-9);
         int ed = floor(pow(r,1.0/k)+1e-9);
        return max(0,ed-s+1);
    }
};