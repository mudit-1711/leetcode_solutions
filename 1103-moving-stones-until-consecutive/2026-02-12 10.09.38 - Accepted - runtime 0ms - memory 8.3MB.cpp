class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> w={a,b,c};
        sort(w.begin(),w.end());
        vector<int> ans;
        int gap1 = w[2]-w[1];
        int gap2 = w[1]-w[0];
        int maxi = w[2]-w[0]-2;
        int mini;
        if(gap1==1&&gap2==1){
            mini= 0;
        }else if(gap2<=2||gap1<=2){
            mini=1;
        }else{
            mini = 2;
        }
        return {mini,maxi};
    }
};