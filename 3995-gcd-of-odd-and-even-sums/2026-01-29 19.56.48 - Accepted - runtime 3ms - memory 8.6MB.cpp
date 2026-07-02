class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=0,o=0,i;
        for(i=1;i<2*n;i++){
            if(i%2==0){
                e+=i;
            }else{
                o+=i;
            }
        }
        return gcd(e,o);
    }
};