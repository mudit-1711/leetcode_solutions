class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int i,j,n=nums.size();
        vector<vector<int>>v;
        for(i=0;i<=n-k;i++){
            vector<int>temp;
            for(j=i;j<i+k;j++){
                temp.push_back(nums[j]);
            }
            if(temp.size()==k){
                v.push_back(temp);
            }
        }
        vector<int>ans;
        for(i=0;i<n;i++){
            int c =0;
            int targ = nums[i];
            for(j=0;j<v.size();j++){
                for(int x = 0;x<v[j].size();x++){
                    if(v[j][x]==targ){
                        c++;
                        break;
                    }
                }
            }
            if(c==1)ans.push_back(targ);
        }
        if(ans.empty())return -1;
        return *max_element(ans.begin(),ans.end());
    }
};