class Solution {
public:
    bool isprime(int x ){
        int i,j;
        if(x<2)return false;
        for(i=2;i*i<=x;i++){
            if(x%i==0)return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int i,j,c=0;
        for(i=0;i<nums.size();i++){
            if(i%2==0){
                if(isprime(nums[i]))continue ;
                while(isprime(nums[i])==false){
                    nums[i]++;
                    c++;
                }
            }else{
                if(!isprime(nums[i]))continue ;
                while(isprime(nums[i])==true){
                    nums[i]++;
                    c++;
                }
            }
        }
        return c;
    }
};