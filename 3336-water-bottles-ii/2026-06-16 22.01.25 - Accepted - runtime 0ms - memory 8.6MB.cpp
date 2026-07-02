class Solution {
public:
    int maxBottlesDrunk(int numB, int numE) {
        int i,j;
        int e=0;
        int curr = numB;
        int ans =0;
        while(curr>0||e>=numE){
            while(curr>0){
                curr--;
                e++;
                ans++;
            }
             if(e>=numE){
                e-=numE;
                curr++;
                numE++;
             }
        }
        return ans;
    }
};