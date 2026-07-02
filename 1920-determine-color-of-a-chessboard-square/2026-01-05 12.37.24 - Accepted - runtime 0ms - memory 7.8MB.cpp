class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int row =coordinates[1]-'0';
        int col =coordinates[0]-'a'+1;
        return (col+row)%2!=0;

    }
};