class Solution {
public:
    bool isprime(int x){
        int i,j;
        if(x<=1)return false;
        for(i=2;i*i<=x;i++){
            if(x%i==0)return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int ans=0;
        int num =n;
        int rnum=0;
        while(n>0){
            rnum=rnum*10+n%10;
            n=n/10;
        }
        int i,j;
        for(i=min(num,rnum);i<=max(num,rnum);i++){
            if(isprime(i)){
                ans+=i;
            }
        }
        return ans;
    }
};