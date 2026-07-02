class Solution {
public:
    int sumOfMultiples(int n) {
        int i, sum = 0, j, m;
        int arr[n];
        for (i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
        for (i = 0; i < n; i++) {
            if (arr[i] % 3 == 0 || arr[i] % 5 == 0 || arr[i] % 7 == 0) {
                sum += arr[i];
            }
        }
        return sum;
    }
};