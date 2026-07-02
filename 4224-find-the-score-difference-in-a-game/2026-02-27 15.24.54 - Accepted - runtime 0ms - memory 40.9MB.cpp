class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int p1=0,p2=0;
        int i,j;
         bool active = true;
        for(i=0;i<nums.size();i++){
           if((i+1)%6==0){
               active = !active;
           }
            if(nums[i]%2==1){
               active = !active;
           }
               if(active){
                   p1+=nums[i];
               }else{
                   p2+=nums[i];
               }
           }
        
        return p1-p2;
    }
};