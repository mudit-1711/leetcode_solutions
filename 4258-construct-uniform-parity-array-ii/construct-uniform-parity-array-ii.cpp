class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int i,j,n=nums.size();
        int mn_odd=INT_MAX;
        for(i=0;i<n;i++){
            if(nums[i]%2==1){
                mn_odd=min(mn_odd,nums[i]);
            }
        }
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