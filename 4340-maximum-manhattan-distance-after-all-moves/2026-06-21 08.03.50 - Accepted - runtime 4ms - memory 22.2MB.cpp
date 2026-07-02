class Solution {
public:
    int maxDistance(string s) {
        int l=0,u=0,d=0,r=0,dash=0;
        int i,j;
        for(i=0;i<s.size();i++){
            if(s[i]=='U'){
                u++;
            }else if(s[i]=='D'){
                d++;
            }else if(s[i]=='L'){
                l++;
            }else if(s[i]=='R'){
                r++;
            }else{
                dash++;
            }
        }
        int x = abs(l-r);
        int y = abs(u-d);
        return x+y+dash;
    }
};