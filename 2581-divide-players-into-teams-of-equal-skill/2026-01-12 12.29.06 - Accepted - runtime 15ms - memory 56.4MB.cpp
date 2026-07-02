class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int left = 0, right = skill.size() - 1;
        int k = skill[0] + skill[skill.size() - 1];
        long long chem = 0;
        while (left < right) {
            if (skill[left] + skill[right] == k) {
                chem = chem + skill[left] * skill[right];
                left++;
                right--;
            } else {
                return -1;
            }
        }
        return chem;
    }
};