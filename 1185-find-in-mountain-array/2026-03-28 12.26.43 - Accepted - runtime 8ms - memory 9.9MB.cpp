/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int mini=-1;
        int i=0,j;
        int n = mountainArr.length();
        j=n-1;
        //find peak'
        while(i<j){
            int mid = i+(j-i)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                i=mid+1;
            }else{
                j=mid;
            }
        }
        //left
        int peak=i;
        i=0;
        j=peak;
        while(i<=j){
            int mid=i+(j-i)/2;
            int val = mountainArr.get(mid);
            if(val==target)return mid;
            else if(val<target)i=mid+1;
            else j = mid-1;
        }
        //right
        i= peak+1;
        j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int val = mountainArr.get(mid);
            if(val==target)return mid;
            else if(val>target)i=mid+1;
            else j=mid-1;
        }
        return mini;
    }
};