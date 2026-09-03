class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int i,j,n=nums.size();
        // int mn = *min_element(nums.begin(),nums.end());
        int odd=0;
        int mn_odd=INT_MAX,mn_even=INT_MAX;
        for(i=0;i<n;i++){
            //if(nums[i]==mn)mn_idx=i;
            if(nums[i]%2==1){
                odd++;
                mn_odd=min(mn_odd,nums[i]);
            }else{
                mn_even=min(mn_even,nums[i]);
            }
        }
        int even=n-odd;
        if(even==n||odd==n){
            return true;
        }
        //odd-even=odd
        //odd-odd=even
        //even-even=even
        // even -odd = odd
        vector<int>temp=nums;
        //even
        bool ok1=true;
        for(i=0;i<n;i++){
            if(nums[i]%2==0){
                continue;
            }else{
                if(!(nums[i]-mn_odd>=1)){
                    ok1=false;
                    break;
                }
            }
        }
        bool ok2 = true;
        //odd
        for(i=0;i<n;i++){
            if(nums[i]%2==1){
                continue;
            }else{
                if(!(nums[i]-mn_odd>=1)){
                    ok2=false;
                    break;
                }
            }
        }
        if(ok1||ok2)return true;
        return false;
    }
};