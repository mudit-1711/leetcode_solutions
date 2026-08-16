class Solution {
public:
    int minPenalty(int p, vector<int>& l, vector<int>& a) {
        int i,j;
        int ans =0;
        int gmax = *max_element(l.begin(),l.end());
        for(auto x : a){
            int r = x%p;
            int w =0;
            if(r>=gmax){
                 w = p-r;
            }
            ans=max(ans,w);
        }
        return ans;
    }
};