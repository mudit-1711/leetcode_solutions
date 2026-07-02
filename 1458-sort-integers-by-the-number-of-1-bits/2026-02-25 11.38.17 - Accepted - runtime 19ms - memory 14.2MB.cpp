class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int i,j;
        sort(arr.begin(),arr.end());
        for(i=0;i<arr.size()-1;i++){
            for(j=0;j<arr.size()-i-1;j++){
                if(__builtin_popcount(arr[j])>__builtin_popcount(arr[j+1])){
                swap(arr[j],arr[j+1]);
                }
            }
        }
        return arr;
    }
};