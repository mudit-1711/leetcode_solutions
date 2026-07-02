class Solution {
public:
    bool isprime(int x){
        int i,j;
        if(x<2)return false;
        for(i=2;i*i<=x;i++){
            if(x%i==0)return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int i,j;
        int first=-1,last=-1;
        bool firstprime=false;
        for(i=0;i<nums.size();i++){
            if(isprime(nums[i])&&firstprime==true){
                last=i;
            }else if(isprime(nums[i])&&firstprime==false){
                first=i;
                firstprime = true;
            }
        }
        if(last==-1)return 0;
        return abs(first-last);
    }
};