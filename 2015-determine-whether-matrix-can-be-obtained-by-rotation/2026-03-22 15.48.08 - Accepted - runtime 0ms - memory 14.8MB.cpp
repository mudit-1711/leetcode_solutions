class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>> m){
        int i,j,n=m.size();
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                swap(m[i][j],m[j][i]);
            }
        }
        reverse(m.begin(),m.end());
        return m;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i,j;
        for(i=1;i<=4;i++){
            if(mat==target)return true;
            else mat = rotate(mat);
        }
        return false;
    }
};