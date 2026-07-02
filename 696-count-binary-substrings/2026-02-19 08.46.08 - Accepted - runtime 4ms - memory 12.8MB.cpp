class Solution {
public:
    int countBinarySubstrings(string s) {
        int i,j;
     int curr=1,prev=0,ans=0;
        for(i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                curr++;
            }else{
                ans+=min(prev,curr);
                prev = curr;
                curr=1;
            }
        }
        return ans+min(prev,curr);
    }
};