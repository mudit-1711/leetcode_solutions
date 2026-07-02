class Solution {
public:
    bool isValid(string s) {
        stack<int> open;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                open.push(s[i]);
            } else {
                if (open.empty())  return false;
                char ch = open.top();
                open.pop();
                if ((ch == '(' && s[i] == ')') || (ch == '{' && s[i] == '}') ||
                    (ch == '[' && s[i] == ']')) {

                } else {
                    return false;
                }
            }
        }
        return open.empty();
    }
};