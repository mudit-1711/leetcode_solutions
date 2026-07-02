class Solution {
public:
    string mergeCharacters(string s, int k) {
        string ans="";
        int i,j;
        for(i=0;i<s.size();i++){
            bool ok =true;
            for(j=0;j<ans.size();j++){
                if(s[i]==ans[j]&&(ans.size()-j)<=k){
                    ok =false;
                    break;
                }
            }
            if(ok)
            ans+=s[i];
        }
        return ans;
    }
};