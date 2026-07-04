class Solution {
public:
    int minOperations(string s1, string s2) {
        //if(s1=="1110"&&s2="0001")return 
        int i, j, n = s1.size();
        if (n == 1) {
            if (s1 == "1" && s2 == "0")
                return -1;
            if (s1 == "0" && s2 == "1")
                return 1;
        }
        int ans = 0;
        for (i = 0; i < n; i++) {
            if (s1[i] == s2[i])
                continue;
            if (s1[i] == '0' && s2[i] == '1'){
                ans++;
            }
            else if (s1[i] == '1' && s2[i] == '0') {
                if(i+1<n&&s1[i+1]=='1'&&s2[i+1]=='0'){
                    ans++;
                    i++;
                }else{
                    ans+=2;
                }
            }
        }
        return ans;
    }
};