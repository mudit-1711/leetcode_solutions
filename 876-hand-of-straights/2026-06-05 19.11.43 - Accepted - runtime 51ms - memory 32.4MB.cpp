class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        sort(hand.begin(),hand.end());
        int i,j,n,k;
        if(hand.size()%g!=0){
            return false;
        }
        map<int,int>mpp;
        for(auto x : hand){
            mpp[x]++;
        }
        for(auto x : hand){
            if(mpp[x]==0){
                continue;
            }
            for(i=0;i<g;i++){
                int card = x+i;
                if(mpp[card]==0){
                    return false;
                }
                mpp[card]--;
            }
        }
        return true;
    }
};