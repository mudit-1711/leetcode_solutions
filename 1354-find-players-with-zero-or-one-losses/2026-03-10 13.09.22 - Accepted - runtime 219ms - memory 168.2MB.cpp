class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       vector<vector<int>>ans;
        map<int,int>l;
        for(int i=0;i<matches.size();i++){
            l[matches[i][1]]++;
        }
        set<int>win;
        vector<int>lose;
        for(int i = 0; i < matches.size(); i++){
            if(l.find(matches[i][0]) == l.end()){
                win.insert(matches[i][0]);
            }
        }
        for(auto x : l){
            if(x.second==1){
                lose.push_back(x.first);
            }
        }
        vector<int> winVec(win.begin(), win.end());
        ans.push_back(winVec);
        ans.push_back(lose);
        return ans;
    }
};