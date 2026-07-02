class Solution {
public:
    int revnum(int x){
        int r=0;
        while(x>0){
            int d=x%10;
            r=r*10 + d;
            x=x/10;
        }
         return r;
    }
    
    int mirrorDistance(int n) {
        return abs(n-revnum(n));
    }
};