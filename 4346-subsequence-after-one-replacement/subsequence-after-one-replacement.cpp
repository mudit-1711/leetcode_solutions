class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n= s.size(),m=t.size();
        vector<int>pref(m+1,0);
        int i=0;
        int j;
        for(j=0;j<m;j++){
            if(i<n&&s[i]==t[j])i++;
            pref[j+1]=i;
        }
        vector<int>suff(m+1,n);
         i=n-1;
        for(j=m-1;j>=0;j--){
            if(i>=0&&s[i]==t[j])i--;
            suff[j]=i+1;
        }
        if(pref[m]==n)return true;
        for(j=0;j<m;j++){
            int l = pref[j];
            int r = suff[j+1];
            if(l<n&&l==r-1){
                return true;
            }
        }
        return false;
    }
};