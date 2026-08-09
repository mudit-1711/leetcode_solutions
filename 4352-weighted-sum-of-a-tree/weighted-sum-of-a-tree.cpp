class Solution {
public:
    long long weightedSum(vector<int>& p, vector<int>& nums) {
        long long ans =0;
        int i,j;
        vector<int>d(p.size(),0);
        d[0]=1;
        int h=1;
        for(i=1;i<p.size();i++){
            j=i;
            int steps=0;
            while(d[j]==0){
                steps++;
                j=p[j];
            }
            int cur = d[j]+steps;
            j=i;
            while(d[j]==0){
                d[j]=cur;
                h=max(h,d[j]);
                cur--;
                j=p[j];
            }
        }
        for(i=0;i<p.size();i++){
            ans+=1LL*(h-d[i]+1)*nums[i];
        }
        return ans;
    }
};