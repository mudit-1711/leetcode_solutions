class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
       vector<int>ans;
       int i,j;
       int n = a.size();
       vector<int>v(n+1,0);
       int com=0;
       for(i=0;i<n;i++){
           v[a[i]]++;
           if(v[a[i]]==2){
            com++;
           }
           v[b[i]]++;
           if(v[b[i]]==2){
            com++;
           }
           ans.push_back(com);
       }
        return ans;
        
    }
};