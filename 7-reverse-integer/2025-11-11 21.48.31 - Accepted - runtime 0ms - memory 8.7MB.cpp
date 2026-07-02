class Solution {
public:
    int reverse(int x) {
       long long rev=0,y,m;
       
       while(x!=0){
        y=x%10;
        rev=rev*10+y;
        x=x/10;
       }
       if(rev<INT_MIN||rev>INT_MAX){
        return 0;
       }

       return rev;
       
    }
};