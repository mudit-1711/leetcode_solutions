class Solution {
public:
    int binaryGap(int n) {
        int x=n;
        string binary = "";
        while(x>0){
            int rem  = x%2;
            binary+=to_string(rem);
            x=x/2;
        }
        reverse(binary.begin(),binary.end());
        int left=0,right=0;
        int maxlen=0;
        while(right<binary.size()&&left<binary.size()){
            while(left<binary.size()&&binary[left]!='1'){
                left++;
            }
            right = left+1;
            while(right<binary.size()&&binary[right]!='1'){
                right++;
            }
            if(right<binary.size()){
                maxlen=max(maxlen,right-left);
            }
            left=right;
        }
        return maxlen;
    }
};