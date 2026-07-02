class Solution {
public:
    bool consecutiveSetBits(int n) {
        string ans ="";
        int i,j;
        while(n>0){
            int d = n%2;
            ans+=to_string(d);
                n=n/2;
        }
        int a =0;
        for(i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]&&ans[i]=='1'){
                a++;
            }
        }
        return a==1;
    }
};