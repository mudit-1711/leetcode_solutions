class Solution {
public:
    int largestInteger(int n, int s) {
        string si="";
        if(s>9*n)return -1;
        int i,j;
        if(s==0){
            return 0;
        }
        while(n>0){
            if(s>=9){
            si+='9';
                s-=9;
            }else{
                si+=char('0'+s);
                s=0;
            }
            n-=1;
        }
        //if(n>s)return -1;
        //while
        return stoi(si);
    }
};