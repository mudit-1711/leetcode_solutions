class Solution {
public:
    int numberOfSpecialChars(string word) {
        int i,j,k=0;
        vector<int>low(26,-1);
        vector<int>upp(26,1e9);
        for(i=0;i<word.size();i++){
            if(islower(word[i])){
                low[word[i]-'a']=i;
            }else{
                upp[word[i]-'A']=min(upp[word[i]-'A'],i);
            }
        }
        for(i=0;i<26;i++){
            if(low[i]!=-1&&upp[i]!=1e9&&low[i]<upp[i]){
                k++;
            }
        }
        return k;
    }
};