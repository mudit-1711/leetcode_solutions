class Solution {
public:
    string digitSum(string s, int k) {
        int i=0,j,n=s.size();
        int l = n;
        while(l>k){
            string temp="";
            i=0;
            while(i<l){
                string v = s.substr(i,k);
                int sum=0;
                for(j=0;j<v.size();j++){
                    sum+=v[j]-'0';
                }
                temp+=to_string(sum);
                i+=k;
            }
            s=temp;
            l=s.size();
        }
        return s;
    }
};