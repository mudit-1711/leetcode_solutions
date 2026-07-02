class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int x=0,y=0;
        if(left.size()){
            x=*max_element(left.begin(),left.end());
        }
         if(right.size()){
            y=n-*min_element(right.begin(),right.end());
        }
        return max(x,y);
    }
};