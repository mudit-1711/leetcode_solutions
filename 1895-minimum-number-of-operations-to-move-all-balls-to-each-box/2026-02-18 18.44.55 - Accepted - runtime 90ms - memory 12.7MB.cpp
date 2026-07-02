class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        int i,j;
        for(i=0;i<boxes.size();i++){
              int count=0;
            for(j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    count+=abs(i-j);
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};