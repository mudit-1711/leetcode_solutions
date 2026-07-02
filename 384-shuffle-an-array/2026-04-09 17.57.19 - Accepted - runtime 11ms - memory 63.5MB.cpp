class Solution {
public:
vector<int> a;
vector<int> o;
    Solution(vector<int>& nums) {
        o= nums;
         a= nums;
    }
    vector<int> reset() {
        a=o;
        return a;
    }
    
    vector<int> shuffle() {
for (int i = a.size()-1; i > 0; i--) {
    int j = rand() % (i + 1);
    swap(a[i], a[j]);
}
        return a;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */