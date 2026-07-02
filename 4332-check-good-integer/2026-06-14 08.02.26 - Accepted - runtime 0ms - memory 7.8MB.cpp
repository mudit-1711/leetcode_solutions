class Solution {
public:
    bool checkGoodInteger(int n) {
        int i,j;
        int temp = n;
        int dsum=0;
        while(temp>0){
            dsum+=(temp%10);
            temp=temp/10;
        }
        int ssum=0;
        while(n>0){
            ssum+=(n%10)*(n%10);
            n=n/10;
        }
        return (ssum-dsum)>=50;
    }
};