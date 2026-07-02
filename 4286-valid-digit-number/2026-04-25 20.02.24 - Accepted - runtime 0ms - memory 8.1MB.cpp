class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int>v;
        int i,j;
        while(n>0){
            int d = n%10;
            v.push_back(d);
            n=n/10;
        }
        for(i=0;i<v.size();i++){
            if(v[i]==x&&v[v.size()-1]!=x){
                return true;
            }
        }
        return false;
    }
};