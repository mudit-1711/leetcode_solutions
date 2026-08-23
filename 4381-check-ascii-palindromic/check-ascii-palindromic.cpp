class Solution {
public:
    bool isPalindromic(string s) {
        string b ="";
        for(auto c : s){
            b+=bitset<8>(c).to_string();
        }
        int i=0,j=b.size()-1;
        while(i<j){
            if(b[i]!=b[j])return false;
            i++;
            j--;
        }
        return true;
    }
};