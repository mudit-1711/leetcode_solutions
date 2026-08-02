class Solution {
public:
    vector<int> countTasks(vector<int>& t, vector<int>& shifts) {
        vector<long long>pref(t.size()+1,0);
        int i,j;
        for(i=0;i<t.size();i++){
            pref[i+1]=pref[i]+t[i];
        }
        vector<int>ans;
        long long cur=0,total=pref[t.size()];
        for(auto x : shifts){
            long long rem = total-cur;
            if(x>=rem){
                ans.push_back(0);
                cur=0;
            }else{
                cur+=x;
                auto it = upper_bound(pref.begin(),pref.end(),cur);
                int com = distance(pref.begin(),it)-1;
                ans.push_back(t.size()-com);
            }
        }
        return ans;
    }
};