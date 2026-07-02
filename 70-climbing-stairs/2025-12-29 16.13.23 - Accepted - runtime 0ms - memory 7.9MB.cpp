class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int i,j,a,b,temp;
        a=1;
        b=2;
        for(i=3;i<=n;i++){
            temp =a+b;
            a=b;
            b=temp;

        }
        return b;
    }
};