class Solution {
public:
    int minPartitions(string n) {
        int k = n.size();
        int i, j;
        int maxi = n[0]-'0';
        for (i = 0; i < k; i++) {
            if (n[i]-'0' > maxi) {
                maxi =n[i]-'0';
            }
        }
        return maxi;
    }
};