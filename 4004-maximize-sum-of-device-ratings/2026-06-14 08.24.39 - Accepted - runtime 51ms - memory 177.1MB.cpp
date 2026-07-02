class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        long long i,j;
        long long sum=0;
        long long mn1 = 1e18 , mn2 = 1e18;
        for(auto x : units){
            long long a = 1e18,b=1e18;
            for(auto c : x){
                if(c<a){
                    b=a;
                    a=c;
                }else if(c<b){
                    b=c;
                }
            }
            if(b==1e18)b=a;
            sum+=b;
            mn1=min(mn1,a);
            mn2=min(mn2,b);
        }
        return sum - mn2+mn1;
    }
};