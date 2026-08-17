class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int b = count(s.begin(),s.end(),'b');
         int a = count(s.begin(),s.end(),'a');
        return abs(a-b);
    }
};