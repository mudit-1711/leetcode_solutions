class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int i,j,n=nums.size(),ans=0;
        for(i=0;i<n;i++){
            map<int,int>mpp;
            vector<int>v;
            int c =0;
            for(j=i;j<n;j++){
                if(mpp.find(nums[j])==mpp.end()){
                    mpp[nums[j]]=v.size();
                    v.push_back(1);
                    if(v.size()>1)c++;
                }else{
                    int k = mpp[nums[j]]+1;
                    if(v[k-1]!=k)c--;
                    v[k-1]++;
                    if(v[k-1]!=k)c++;
                    if(v[k-1]>k)break;
                }
                bool ok = true;
                if(c!=0)ok = false;
                if(ok)ans++;
            }
            
        }
        return ans;
    }
};