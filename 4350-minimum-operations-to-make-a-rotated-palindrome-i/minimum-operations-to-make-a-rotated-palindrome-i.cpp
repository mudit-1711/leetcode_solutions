class Solution {
public:
    int c(char a,char b){
        return min((b-a+26)%26,(a-b+26)%26);
    }
    int minOperations(string s) {
        int ans = INT_MAX;
        int i,j;
        for(i=0;i<s.size();i++){
            int r =i;
            int cost=0;
            for(j=0;j<s.size()/2;j++){
                char a =s[(i+j)%s.size()];
                char b =s[(i+s.size()-j-1)%s.size()];
                cost+=c(a,b);
            }
            ans=min(ans,r+cost);
        }
        return ans;
    }
};