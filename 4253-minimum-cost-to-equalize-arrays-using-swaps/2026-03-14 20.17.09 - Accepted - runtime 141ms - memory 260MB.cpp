class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        vector<int> t = nums1;  
        
        unordered_map<int,int> cnt;
        int n = nums1.size();

        for(int i=0;i<n;i++){
            cnt[nums1[i]]++;
            cnt[nums2[i]]--;
        }

        long long diff = 0;

        for(auto &x: cnt){
            if(x.second % 2 != 0) return -1;
            diff += abs(x.second);
        }

        return diff / 4;
    }
};