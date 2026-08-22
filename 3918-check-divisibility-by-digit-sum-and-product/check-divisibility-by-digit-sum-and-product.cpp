class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int u =n;
        int pro=1;
        while(n>0){
            sum+=(n%10);
            pro*=(n%10);
            n=n/10;
        }
        return u%(sum+pro)==0;
    }
};