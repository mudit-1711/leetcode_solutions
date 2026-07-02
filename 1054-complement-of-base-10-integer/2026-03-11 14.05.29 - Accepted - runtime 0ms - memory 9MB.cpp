class Solution {
public:
    int bitwiseComplement(int n) {
        string bin ="";
        int x = n;
        if(n==0)return 1;
        while(x>0){
            bin+=to_string(x%2);
            x=x/2;
        }
        reverse(bin.begin(),bin.end());
        int i;
        for(i=0;i<bin.size();i++){
            if(bin[i]=='1'){
                bin[i]='0';
            }else{
                 bin[i]='1';
            }
        }
        int j=0;
        int ans=0;
        for(i=bin.size()-1;i>=0;i--){
            ans+=(bin[i]-'0')*(pow(2,j));
            j++;
        }
        return ans;
    }
};