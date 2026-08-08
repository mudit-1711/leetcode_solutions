class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i,j,n=nums.size();
        vector<int>l(n,0),r(n,0);
        l[0]=0;
        r[0]=0;
        for(i=1;i<n;i++){
            l[i]=l[i-1]+nums[i-1];
        }
        for(i=n-2;i>=0;i--){
            r[i]=r[i+1]+nums[i+1];
        }
        for(i=0;i<n;i++){
            if(l[i]==r[i])return i;
        }
        return -1;
    }
};