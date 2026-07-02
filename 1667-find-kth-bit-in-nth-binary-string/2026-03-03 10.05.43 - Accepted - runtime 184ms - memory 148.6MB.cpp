class Solution {
public:
    string invert(string s){
        string ans ="";
        int i,j;
        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans+='0';
            }else{
                ans+='1';
            }
        }
        return ans;
    }
    string rev (string s){
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            ans+=s[i];
        }
        return ans;
    }
    char findKthBit(int n, int k) {
        int i,j;
        string ans="0";
        for(int i=2;i<=n;i++){
           string temp = ans;
           ans =temp +"1"+rev(invert(temp));
        }
        return ans[k-1];
    }
};