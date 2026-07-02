class Solution {
public:
    int solve(string st, int k, char c) {
        int count = 0, left = 0, right = 0, answer=0;
        for (right = 0; right < st.length(); right++) {
            if (st[right] != c) {
                count++;
            }
            while (count > k) {
                if (st[left] != c) {
                    count--;
                }
                left++;
            }
            answer = max(answer, right - left + 1);
        }
        return answer;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve(answerKey, k, 'T'), solve(answerKey, k, 'F'));
    }
};