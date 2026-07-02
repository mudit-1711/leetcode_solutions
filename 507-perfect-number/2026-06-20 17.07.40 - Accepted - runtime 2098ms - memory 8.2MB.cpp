class Solution {
public:
    bool checkPerfectNumber(int num) {
        int o,j;
        vector<int>v;
        for(j=1;j<num;j++){
            if(num%j==0){
                    v.push_back(j);
            }
        }
        int sum=0;
        for(j=0;j<v.size();j++){
            sum+=v[j];
        }
        return sum==num;
    }
};