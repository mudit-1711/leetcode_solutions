class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count =0;
        int i,n=hours.size();
        for(i=0;i<n;i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};