class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
       int sum=0;
       int j =x;
        while(x>0){
            int d = x%10;
           
            x=x/10;
             sum+=d;
        }
        if(j%sum==0){
            return sum;
        }
        return -1;
    }
};