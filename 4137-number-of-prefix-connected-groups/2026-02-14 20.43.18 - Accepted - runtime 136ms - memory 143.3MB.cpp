class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int> mpp;
        int i,j;
        for(auto st : words){
            if(st.length()<k)continue;
            string pref = "";
            for(i=0;i<k;i++){
                pref+=st[i];
            }
            mpp[pref]++;
        }
        int ans=0;
        for(auto it : mpp){
            if(it.second>=2)ans++;
        }
        return ans;
    }
};