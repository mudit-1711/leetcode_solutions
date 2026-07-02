class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int i,j;
        for(i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
               st.push(s[i]);
            }else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};