class Solution {
public:
    string itb(int x) {
        string ans = "";
        while (x > 0) {
            ans += to_string(x % 2);
            x = x / 2;
        }
        return ans;
    }
    int minimumFlips(int n) {
        int i,j=0;
        string s = itb(n);
        string v= s;
        reverse(v.begin(),v.end());
        for(i=0;i<s.size();i++){
            if(s[i]!=v[i])j+=1;
        }
        return j;
    }
};