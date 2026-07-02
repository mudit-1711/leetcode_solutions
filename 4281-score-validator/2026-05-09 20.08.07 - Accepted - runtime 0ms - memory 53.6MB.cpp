class Solution {
public:
    vector<int> scoreValidator(vector<string>& e) {
        int i,j;
        vector<int>ans;
        int s=0,c=0;
        for(i=0;i<e.size();i++){
            if((e[i]=="1")||(e[i]=="0")||(e[i]=="2")||(e[i]=="3")||(e[i]=="4")||(e[i]=="5")||(e[i]=="6")){
                s+=stoi(e[i]);
            }else if(e[i]=="W"){
                c++;
            }else if(e[i]=="WD"){
                s++;
            }else if(e[i]=="NB"){
                s++;
            }
            if(c==10){
                break;
            }
        }
        ans.push_back(s);
        ans.push_back(c);
        return ans;
    }
};