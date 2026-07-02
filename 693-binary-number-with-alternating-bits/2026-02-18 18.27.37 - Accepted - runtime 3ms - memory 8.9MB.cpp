class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary="";
        int i,j;
        while(n>0){
            int rem = n%2;
            binary+=to_string(rem);
            n=n/2;
        }
        for(i=0;i<binary.size()-1;i++){
            if(binary[i]==binary[i+1]){
                return false;
            }
        }
        return true;
    }
};