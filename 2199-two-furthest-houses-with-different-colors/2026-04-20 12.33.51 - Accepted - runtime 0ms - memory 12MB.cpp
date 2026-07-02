class Solution {
public:
    int maxDistance(vector<int>& c) {
        int i,j;
        int d =0;
        int n=c.size();
        for (i=0;i<n;i++){
            for (j=i+1;j<n;j++){
                if(c[i]!=c[j]){
                    d=max(d,abs(j-i));
                }
            }
        }
        return d;
    }
};