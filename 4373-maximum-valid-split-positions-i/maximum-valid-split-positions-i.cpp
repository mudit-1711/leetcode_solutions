class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int i,j,n=nums.size(),ans=0;
        for(i=-1;i<n;i++){
            vector<int>temp;
            for(j=0;j<n;j++){
                if(j!=i)temp.push_back(nums[j]);
            }
            int m = temp.size();
            if(m<2)continue;
            vector<int>p(m),s(m);
            p[0]=temp[0];
            for(j=1;j<m;j++){
                p[j]=gcd(p[j-1],temp[j]);
            }
            s[m-1]=temp[m-1];
            for(j=m-2;j>=0;j--){
                s[j]=gcd(s[j+1],temp[j]);
            }
            int c=0;
            for(j=0;j<m-1;j++){
                if(p[j]==s[j+1])c++;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};