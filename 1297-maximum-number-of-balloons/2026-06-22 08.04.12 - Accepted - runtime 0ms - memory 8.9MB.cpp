class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v(26, 0);
        for (char c : text) {
            v[c - 'a']++;
        }
        int j = 0;
        while (v['b' - 'a'] >= 1 && v['a' - 'a'] >= 1 && v['l' - 'a'] >= 2 &&
               v['o' - 'a'] >= 2 && v['n' - 'a'] >= 1) {
            j++;
            v['b' - 'a']--;
            v['a' - 'a']--;
            v['l' - 'a'] -= 2;
            v['o' - 'a'] -= 2;
            v['n' - 'a']--;
        }
        return j;
    }
};