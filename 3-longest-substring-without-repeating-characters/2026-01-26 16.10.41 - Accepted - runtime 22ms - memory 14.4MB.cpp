class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right ;
        int len = 0;
        unordered_set<char> ans;
        for (right = 0; right < s.length(); right++) {
            while(ans.count(s[right])){
                ans.erase(s[left++]);
            }
            ans.insert(s[right]);
            len=max(len,abs(right-left)+1);
        }
        return len;
    }
};