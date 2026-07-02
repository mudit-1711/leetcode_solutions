class Solution {
public:
    string removeTrailingZeros(string num) {
      int j = num.size()-1;
        while(j){
            if(num[j]=='0'){
                num.pop_back();
            }else{
                break;
            }
            j--;
        }
        return num;
    }
};