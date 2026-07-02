class Solution {
public:
    long long minEnergy(int n, int b, vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int i,j;
        long long time=0;
        long long s = in[0][0];
        long long e = in[0][1];
        for(i=1;i<in.size();i++){
            if(in[i][0]<=e+1){
                e=max(e,(long long)in[i][1]);
            }else{
                time+=(e-s+1);
                s = in[i][0];
             e = in[i][1];
            }
        }
        time+=(e-s+1);
        return ((b+2)/3)*time;
    }
};