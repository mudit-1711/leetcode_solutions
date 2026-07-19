class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x = abs(target[0]-start[0]);
        int y = abs(target[1]-start[1]);
        return (x+y)%2==0;
    }
};