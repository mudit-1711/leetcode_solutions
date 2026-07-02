class EventManager {
public:
    priority_queue<pair<int,int>>pq;
    unordered_map<int,int>mp;
    EventManager(vector<vector<int>>& events) {
        for(auto &x : events){
            int id = x[0],p = x[1];
            mp[id]=p;
            pq.push({p,-id});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        mp[eventId]=newPriority;
        pq.push({newPriority,-eventId});
    }
    
    int pollHighest() {
        while(!pq.empty()){
            auto top =pq.top();
            pq.pop();
            int p = top.first;
            int id = -top.second;
            if(mp.count(id)&&mp[id]==p){
                mp.erase(id);
                return id;
            }
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */