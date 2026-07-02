class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int i=0,j;
        //ans.push_back("Push");
        //ans.push_back("Pop");
        int count=1;
         while(i<target.size()){
            if(target[i]==count){
                ans.push_back("Push");
                i++;
                count++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
                count++;
            }
         }
        return ans;
    }
};