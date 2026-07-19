class Solution {
public:
    long long maximumValue(int n, int s, int m) {
       // return 1LL*s+1LL*(n/2)*m;
        if(n==1)return s;
        long long t = n/2;
        return 1LL*s + t*m -t+1;
    }
};