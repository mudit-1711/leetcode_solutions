class Solution {
public:
    int closestTarget(vector<string>& words, string target, int start) {
        bool find = false;
        int n = words.size();
        int i,j;
        for(i=0;i<words.size();i++){
            if(words[i]==target){
                find = true;
                break;
            }
        }
        if(find==false)return -1;
        int f =0, b =0;
        i=start;
        while(true){
            if(words[i]==target){
                break;
            }else{
                f++;
                i = (i+1)%n;
            }
        }
        i=start;
         while(true){
            if(words[i]==target){
                break;
            }else{
                b++;
                i = (i-1+n)%n;
            }
        }
        return min(f,b);
    }
};