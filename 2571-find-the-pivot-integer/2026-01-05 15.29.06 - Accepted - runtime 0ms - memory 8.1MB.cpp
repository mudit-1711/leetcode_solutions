class Solution {
public:
    int pivotInteger(int n) {
        int s = n*(n+1)/2;
        int x =sqrt(s);
        if(x*x==s){
            return x;
        }
        return -1;
    }
};