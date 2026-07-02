class Solution {
public:
    int trailingZeroes(int n) {
        int k=0;
        while(n>0){
            n=n/5;
            k+=n;
        }
        return k;
    }
};