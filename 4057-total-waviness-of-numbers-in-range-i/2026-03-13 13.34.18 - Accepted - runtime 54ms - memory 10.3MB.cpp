class Solution {
public:
    int iswave(int x){
        if(x<100){
            return 0;
        }
        string s = to_string(x);
        int ans=0;
        for(int i=1;i+1<s.size();i++){
            int a = s[i-1]-'0';
            int b = s[i]-'0';
            int c = s[i+1]-'0';
            if((b>a&&b>c)||b<a&&b<c){
                ans++;
            }
        }
        return ans;
    }
    int totalWaviness(int num1, int num2) {
        int i,j,count=0;
        for(i=num1;i<=num2;i++){
            count+=iswave(i);
        }
        return count;
    }
};