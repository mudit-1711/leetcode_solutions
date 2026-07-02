class Solution {
public:
    int differenceOfSums(int n, int m) {
        int i;
    
        int sum1 =0,sum2=0;
        for(i=1;i<=n;i++){
            if(i%m!=0){
                sum1+=i;
            }else{
                sum2+=i;
            }
        }
        int ans = sum1-sum2;
        return ans;
    }
};