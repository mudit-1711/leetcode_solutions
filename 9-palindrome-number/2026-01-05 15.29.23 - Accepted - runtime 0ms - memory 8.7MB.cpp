class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else {
            long long  rev = 0, y;
            int orig =x;
            while (x != 0) {
                y = x % 10;
                rev = rev*10 + y;
                x = x / 10;
            }
            if (orig == rev) {
                return true ;
            }else{
                return false;
            }
        }
    }
};