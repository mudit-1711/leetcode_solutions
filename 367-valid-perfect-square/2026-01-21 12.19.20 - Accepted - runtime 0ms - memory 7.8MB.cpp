class Solution {
public:
    bool isPerfectSquare(int num) {
        int low =0;
        int high = sqrt(num);
        while(low<=high){
            int mid = (low+high)/2;
            if(mid*mid==num){
                return true;
            }else if(mid*mid>=num){
            high = mid-1;
            }else{
                low =mid+1;
            }
        }
return false;
    }
};