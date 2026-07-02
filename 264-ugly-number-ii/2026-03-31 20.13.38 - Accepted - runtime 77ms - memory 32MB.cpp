class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long>st;
        st.insert(1);
        int i,j;
        long long num=1;
        for(i=1;i<=n;i++){
            num=*st.begin();
            st.erase(st.begin());
            st.insert(2*num);
            st.insert(3*num);
            st.insert(5*num);
        }
        return num;
    }
};