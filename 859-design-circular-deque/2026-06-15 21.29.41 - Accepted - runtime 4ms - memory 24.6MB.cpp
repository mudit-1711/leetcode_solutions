class MyCircularDeque {
public:
    vector<int> v;
    int f, r, n;
    MyCircularDeque(int k) {
        v.resize(k);
        n = k;
        f = r = -1;
    }
    bool insertFront(int value) {
        if (isFull())
            return false;
        if (isEmpty()) {
            f = r = 0;
        } else {
            f = (f - 1 + n) % n;
        }
        v[f] = value;
        return true;
    }
    bool insertLast(int value) {
        if (isFull())
            return false;
        if (isEmpty()) {
            f = r = 0;
        } else {
            r = (r + 1) % n;
        }
        v[r] = value;
        return true;
    }
    bool deleteFront() {
        if (isEmpty())
            return false;
        if (f == r) {
            f = r = -1;
        } else {
            f = (f + 1) % n;
        }
        return true;
    }
    bool deleteLast() {
        if (isEmpty())
            return false;
        if (f == r) {
            f = r = -1;
        } else {
            r = (r - 1 + n) % n;
        }
        return true;
    }
    int getFront() {
        if (isEmpty())
            return -1;
        return v[f];
    }
    int getRear() {
        if (isEmpty())
            return -1;
        return v[r];
    }
    bool isEmpty() { return f == -1; }
    bool isFull() { return !isEmpty() && f == (r + 1) % n; }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */