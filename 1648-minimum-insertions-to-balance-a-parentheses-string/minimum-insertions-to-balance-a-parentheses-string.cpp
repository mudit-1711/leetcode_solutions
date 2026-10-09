class Solution {
public:
    int minInsertions(string s) {
        int i, j, ans = 0;
        stack<char> st;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                st.push('(');
            else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    if (st.empty())
                        ans++;
                    else
                        st.pop();
                    i++;
                } else {
                    ans++;
                    if (st.empty())
                        ans++;
                    else
                        st.pop();
                }
            }
        }
        while (!st.empty()) {
            ans += 2;
            st.pop();
        }
        return ans;
    }
};