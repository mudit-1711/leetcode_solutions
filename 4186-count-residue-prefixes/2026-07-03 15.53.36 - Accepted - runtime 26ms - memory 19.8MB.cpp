class Solution {
public:
    int residuePrefixes(string s) {
        int i,j=0,n=s.length();
        string temp="";
        for(i=0;i<n;i++){
            temp+=s[i];
            set<char>st;
            for(auto c : temp){
                st.insert(c);
            }
            if(st.size()==(temp.size()%3)){
                j+=1;
            }
        }
        return j;
    }
};