class Solution {
public:
    int reverseBits(int n) {
        string binary = "";
        int i,j;
        while(n>0){
            int rem = n%2;
            binary+=to_string(rem);
            n=n/2;
        }
        int ans =0;
        int power =0;
        while(binary.size() < 32){
            binary += '0';
        }
        for(i=binary.size()-1;i>=0;i--){
            ans+=(pow(2,power))*(binary[i]-'0');
            power++;
        }
        return ans;
    }
};