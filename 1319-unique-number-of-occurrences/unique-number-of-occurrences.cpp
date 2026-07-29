class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        int i,j;
        for(auto x: arr){
            mpp[x]++;
        }
        vector<int>freq;
        for(auto x :mpp){
            freq.push_back(x.second);
        }
        sort(freq.begin(),freq.end());
        for(i=1;i<freq.size();i++){
            if(freq[i]==freq[i-1]){
                return false;
            }
        }
        return true;
    }
};