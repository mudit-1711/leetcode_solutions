class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<int>weight;
        int w;
        int i,j;
        for(i=0;i<words.size();i++){
            w=0;
            for(j=0;j<words[i].size();j++){
                w+=weights[words[i][j]-'a'];
            }
            weight.push_back(w);
        }
        for(i=0;i<weight.size();i++){
            weight[i]=weight[i]%26;
        }
        string ans="";
        for(i=0;i<weight.size();i++){
            char ch = 'z'-weight[i];
            ans+=ch;
        }
        return ans;
    }
};