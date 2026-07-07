class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int i,j;
        map<int,int>mpp;
        for(auto x : nums){
            mpp[x]++;
        }
        for(auto x : mpp){
            if(x.second==2)ans.push_back(x.first);
        }
        set<int>st;
        for(auto x : nums){
            st.insert(x);
        }
        vector<int>temp;
        for(auto x : st){
            temp.push_back(x);
        }
        int sum=0;
        for(auto x : temp){
            sum+=x;
        }
        int n = nums.size();
        int real = (n)*(n+1)/2;
        ans.push_back(real-sum);
        return ans;
    }
};