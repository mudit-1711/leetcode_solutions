class Solution {
public:
   int x(int n,int k){
    if(n==1)return 0;
        return (x(n-1,k)+k)%n;
   }
    int findTheWinner(int n, int k) {
        return x(n,k)+1;
    }
};