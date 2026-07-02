class Solution {
public:
    int mySqrt(int x) {
        //return sqrt(x);
        int left =1 ;
        int right=x;
        while(left<=right){
            int mid =left+ (-1*left+right)/2;
            if(mid==x/mid){
                return mid;
            }else if(mid>x/mid){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return right;
    }
};