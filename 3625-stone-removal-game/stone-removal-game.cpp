class Solution {
public:
    bool canAliceWin(int n) {
        int curr = 10;
        int turn = 1;
        while(n>=curr){
            n-=curr;
            curr--;
            if(turn==1)turn=0;
            else turn =1;
        }
        if(turn==0)return true;
        return false;
    }
};