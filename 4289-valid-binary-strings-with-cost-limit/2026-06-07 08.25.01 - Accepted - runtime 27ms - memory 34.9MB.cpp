class Solution {
public:
    vector<string>ans;
    void genrate(int n,int k ,string s){
        if(s.size()==n){
            int c =0;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    c+=i;
                }
            }
            if(c<=k){
                ans.push_back(s);
            }
            return ;
        }
        genrate(n,k,s+'0');
        if(s.empty()||s.back()!='1'){
            genrate(n,k,s+'1');
        }
    }
    vector<string> generateValidStrings(int n, int k) {
           genrate(n,k,"");
        return ans;
        
    }
};