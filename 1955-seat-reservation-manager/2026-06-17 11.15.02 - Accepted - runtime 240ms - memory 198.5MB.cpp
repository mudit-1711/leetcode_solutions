class SeatManager {
public:
    int i,j;
    set<int>st;
    SeatManager(int n) {
        for(i=1;i<=n;i++){
            st.insert(i);
        }
    }
    int reserve() {
        auto it = *st.begin();
        st.erase(it);
        return it;
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */