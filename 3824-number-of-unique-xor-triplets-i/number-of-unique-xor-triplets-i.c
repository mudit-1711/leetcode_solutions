int uniqueXorTriplets(int* nums, int n) {
    if(n<=2)return n;
    int ans=0;
    for(int i=0;i<n;i++){
        ans|=nums[i];
    }
    return ans+1;
}