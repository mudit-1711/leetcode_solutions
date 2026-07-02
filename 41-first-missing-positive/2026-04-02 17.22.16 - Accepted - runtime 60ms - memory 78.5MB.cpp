class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        for(int x : nums) {
            if(x > 0) s.insert(x);
        }
        for(int i = 1; i <= n+1; i++) {
            if(s.find(i) == s.end()) return i;
        }
        return n+1;
    }
};