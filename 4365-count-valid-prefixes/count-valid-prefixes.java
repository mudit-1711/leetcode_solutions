class Solution {
    public int countValidPrefixes(String s) {
        int i,j,ans=0,one=0,zero=0;
        for(char x : s.toCharArray()){
            if(x=='1'){
                one++;
            }else{
                zero++;
            }
            if(Math.abs(zero-one)<=1)ans++;
        }
        return ans;
    }
}