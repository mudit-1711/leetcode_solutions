class Solution {
public:
    int minOperations(string s) {
        int i,j=0,k=0;
        char a ='0',b='1';
        for(i=0;i<s.size();i++){
            if(s[i]!=a)j++;
            if(s[i]!=b)k++;
            if(a=='1'){
                a='0';
            }else{
                a='1';
            }
            if(b=='0'){
                b='1';
            }else{
                b='0';
            }
        }
        return min(j,k);
    }
};