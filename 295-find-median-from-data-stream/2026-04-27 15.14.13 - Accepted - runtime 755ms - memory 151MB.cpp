class MedianFinder {
public:
int i,j;
vector<double>v;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        // v.push_back(num);
        // sort(v.begin(),v.end());
        auto it = lower_bound(v.begin(), v.end(), num);
        v.insert(it, num);
    }
    // 0 1 2 3 4 5
    double findMedian() {
        if(v.size()%2==1){
            return v[v.size()/2];
        }
        return (v[v.size()/2] + v[(v.size()/2)-1])/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */