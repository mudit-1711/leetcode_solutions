class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> mp = {
            {1, "I"},     {2, "II"},     {3, "III"},  {4, "IV"},
            {5, "V"},     {6, "VI"},     {7, "VII"},  {8, "VIII"},
            {9, "IX"},    {10, "X"},     {20, "XX"},  {30, "XXX"},
            {40, "XL"},   {50, "L"},     {60, "LX"},  {70, "LXX"},
            {80, "LXXX"}, {90, "XC"},    {100, "C"},  {200, "CC"},
            {300, "CCC"}, {400, "CD"},   {500, "D"},  {600, "DC"},
            {700, "DCC"}, {800, "DCCC"}, {900, "CM"}, {1000, "M"},
            {2000, "MM"}, {3000, "MMM"}};
        int i, j;
        string s = to_string(num);
        vector<int> v;
        int pos = 1;
        for (i = s.size() - 1; i >= 0; i--) {
            v.push_back(pos * (s[i] - '0'));
            pos *= 10;
        }
        string ans = "";
        reverse(v.begin(), v.end());
        for (int x : v) {
            ans += mp[x];
        }
        return ans;
    }
};