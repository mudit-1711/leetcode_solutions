class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string s ="123456789";
        int i,j;
        for(i=0;i<9;i++){
            for(j=i+1;j<9;j++){
                string temp = s.substr(i,j-i+1);
                int a = stoi(temp);
                if(a>=low&&a<=high){
                    ans.push_back(a);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};