class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0;
        long long  sum=0;
        long long  right =sqrt(c);
        while(left<=right){
            sum = left*left + right*right;
            if(sum==c){
                return true;
            }else if(sum<c){
                left++;
            }else{
                right--;
            }
        }
        return false;
    }
};