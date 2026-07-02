class Solution {
public:
    int minFlips(string s) {
        int n =s.size();
        int i,j,one=0;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }
        }
        int ans = one>0?one-1:0;
        ans=min(ans,n-one);
        if(n>=2){
            int c =(s[0]=='0')+(s[n-1]=='0')+one -(s[0]=='1')-(s[n-1]=='1');
            ans=min(ans,c);
        }
        return ans;
    }
};