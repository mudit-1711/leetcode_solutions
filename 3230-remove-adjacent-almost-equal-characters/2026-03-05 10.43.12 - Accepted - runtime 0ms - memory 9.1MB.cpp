class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int i,j=0;
        for(i=1;i<word.size();){
            if(word[i]==word[i-1]||abs(word[i]-word[i-1])==1){
                j++;
                i+=2;
            }else{
                i++;
            }
        }
        return j;
    }
};