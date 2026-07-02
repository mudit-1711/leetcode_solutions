class Solution {
public:
    bool isvowel( char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    string trimTrailingVowels(string s) {
  while(!s.empty()&&isvowel(s.back())){
      s.pop_back();
  }
        return s;
    }
};