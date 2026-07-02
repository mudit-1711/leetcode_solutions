class Solution {
public:
    bool isHappy(int n) {
        while(n!=1&&n!=4){
            int sum=0;
            while(n>0){
                int d=n%10;
                sum+=d*d;
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
};