class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int i,j;
        int mini=-1;
        for(i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize){
                if(mini == -1 || capacity[i] < capacity[mini]){
                    mini = i;
                }
            }
        }

        return mini;
    }
};