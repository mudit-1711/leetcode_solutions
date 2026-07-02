class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> ans(deck.size());
        sort(deck.begin(),deck.end());
        int i,j;
        queue<int>q;
        for(i=0;i<deck.size();i++){
            q.push(i);
        }
          for(i=0;i<deck.size();i++){
            ans[q.front()]=deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }
return ans;
    }
};