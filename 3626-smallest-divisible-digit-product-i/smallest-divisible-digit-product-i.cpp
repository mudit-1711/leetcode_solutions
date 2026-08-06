class Solution {
public:
    int pro(int x){
        int ans =1;
        while(x>0){
            ans*=(x%10);
            x=x/10;
        }
    return ans;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(pro(n)%t==0)return n;
            else n++;
        }
    }
};