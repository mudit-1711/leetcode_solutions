class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i,j;
        vector<int>ans;
        long long res =1;
        for(i=0;i<=rowIndex;i++){
            ans.push_back(res);
           res=res*(rowIndex-i)/(i+1);


           
        }
        return ans;
    }
};