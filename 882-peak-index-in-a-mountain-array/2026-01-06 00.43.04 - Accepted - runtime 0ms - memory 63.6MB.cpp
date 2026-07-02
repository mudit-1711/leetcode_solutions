class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i,maxi=0;
        for(i=0;i<arr.size();i++){
            if(arr[maxi]<arr[i]){
                maxi=i;
            }
        }
        return maxi;
    }
};