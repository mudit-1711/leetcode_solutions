class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        string temp = "";
        int i;
        for (i = 0; i <= path.length(); i++) {
            if (i == path.length() || path[i] == '/') {
                if (temp == "" || temp == ".") {
                } else if (temp == "..") {
                    if (!v.empty()) {
                        v.pop_back();
                    }
                } else {
                    v.push_back(temp);
                }
                temp = "";
            } else {
                temp += path[i];
            }
        }
        string ans = "/";
        for (i = 0; i < v.size(); i++) {
            ans += v[i];
            if (i != v.size() - 1) {
                ans += "/";
            }
        }
        return ans;
    }
};