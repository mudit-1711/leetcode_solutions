class Solution {
public:
     bool isprime(int x){
       int i,j;
       if(x<=1)return false;
        for(i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
         return true;
     }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            if(isprime(__builtin_popcount(i))){
                ans++;
            }
        }
        return ans;
    }
};