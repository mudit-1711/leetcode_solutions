class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i;
        int mini = -1;
        for (i = 0; i < letters.size(); i++) {
            if (letters[i] > target) {
                if (mini == -1 || letters[i] < letters[mini]) {
                    mini = i;
                }
            }
        }
        if (mini == -1)
            return letters[0];
        return letters[mini];
    }
};