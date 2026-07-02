class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0,i,j,k;
        int n = jewels.length();
        int m = stones.length();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};