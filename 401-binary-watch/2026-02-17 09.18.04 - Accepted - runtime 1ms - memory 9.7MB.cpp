class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;
        int h,m;
        for(h=0;h<12;h++){
            for(m=0;m<60;m++){
                string time="";
                if(__builtin_popcount(h)+__builtin_popcount(m)==turnedOn){
                    time+=to_string(h);
                    time+=":";
                    if(m<10){
                        time+=to_string(0);
                    }
                    time+=to_string(m);
                    ans.push_back(time);
                }
            }
        }
        return ans;
    }
};