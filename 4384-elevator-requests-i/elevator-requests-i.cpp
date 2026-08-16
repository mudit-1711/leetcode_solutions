class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        int i,j;
        int ans =0;
        int curr=0;
        for(i=0;i<r.size();i++){
            ans+=abs(curr-r[i]);
            curr=r[i];
        }
        return ans;
    }
};