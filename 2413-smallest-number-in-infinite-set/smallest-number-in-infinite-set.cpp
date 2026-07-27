class SmallestInfiniteSet {
public:
    vector<int> nums;
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++)
            nums.push_back(i);
    }
    int popSmallest() {
        int mini = nums[0], idx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                idx = i;
            }
        }
        int r = nums[idx];
        nums.erase(nums.begin() + idx);
        return r;
    }
    void addBack(int num) {
        for (auto x : nums) {
            if (x == num)
                return;
        }
        nums.push_back(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */