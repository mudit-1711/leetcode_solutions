class Solution {
public:
    int sum(vector<int>v){
        int s =0;
        for(int i=0;i<v.size();i++){
            s+=v[i];
        }
        return s;
    }
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            ans.push_back(sum(matrix[i]));
        }
        return ans;
    }
};