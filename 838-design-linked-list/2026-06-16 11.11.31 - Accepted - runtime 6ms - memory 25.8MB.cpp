class MyLinkedList {
public:
    vector<int>v;
    MyLinkedList() {}
    int get(int index) {
        if(index<0||index>=v.size())return -1;
        return v[index];
    }
    void addAtHead(int val) {
        v.insert(v.begin(),val);
    }
    void addAtTail(int val) {
     v.push_back(val);   
    }
    void addAtIndex(int index, int val) {
        if(index < 0) index = 0;

        if(index <= v.size()) {
            v.insert(v.begin() + index, val);
        }
    }
    void deleteAtIndex(int index) {
        if(index>=0&&index<v.size()){
        v.erase(v.begin()+index);
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */