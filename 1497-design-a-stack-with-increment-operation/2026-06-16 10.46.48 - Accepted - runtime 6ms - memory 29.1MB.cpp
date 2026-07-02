class CustomStack {
public:
    vector<int>v;
    int top,n;
    CustomStack(int maxSize) {
        v.resize(maxSize);
        top=-1;
        n=maxSize;
    }
    void push(int x) {
        if(top<n-1){
            top++;
            v[top]=x;
        }
    }
    int pop() {
        if(top==-1)return -1;
        return v[top--];
    }
    void increment(int k, int val) {
        int sz=top+1;
        if(k>=sz){
            for(int i=0;i<sz;i++){
                v[i]+=val;
            }
        }else{
            for(int i=0;i<k;i++){
                v[i]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */