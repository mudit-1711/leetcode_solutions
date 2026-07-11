class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0,n=chars.size(),idx=0;
        while(i<n){
            char curr = chars[i];
            int count=0;
            while(i<n&&curr==chars[i]){
                i+=1;
                count+=1;
            }
            chars[idx]=curr;
            idx+=1;
            if(count>1){
                string s = to_string(count);
                for(auto x : s){
                    chars[idx++]=x;
                }
            }
        }
        return idx;
    }
};