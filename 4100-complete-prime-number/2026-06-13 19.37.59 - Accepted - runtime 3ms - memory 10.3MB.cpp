class Solution {
public:
    bool isprime(int x){
        if(x<2)return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    bool completePrime(int num) {
        string s = to_string(num);
        int i,j;
        vector<int>pref(s.size()),suff(s.size());
        for(i=0;i<s.size();i++){
            string p = s.substr(0,i+1);
            string su = s.substr(i);
            pref[i]=stoi(p);
            suff[i]=stoi(su);
        }
        for(i=0;i<s.size();i++){
            if(!isprime(pref[i]))return false;
        }
        for(i=0;i<s.size();i++){
            if(!isprime(suff[i]))return false;
        }
        return true;
    }
};