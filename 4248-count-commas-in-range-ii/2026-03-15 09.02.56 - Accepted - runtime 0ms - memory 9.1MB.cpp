class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        long long ans =0,start=1000;
        long long x = n;
        int c=1;
        while(start<=x){
            long long end= start*1000-1;
            long long count = min(x,end)-start+1;
            ans+=count*c;
            start*=1000;c++;
        }
        return ans;
    }
};