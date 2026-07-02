class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a1 = abs((ax2-ax1)*(ay2-ay1));
        int a2= abs((bx2-bx1)*(by2-by1));
         int ow = min(ax2,bx2)-max(ax1,bx1);
         int ol = min(ay2,by2)-max(ay1,by1);
         int oa=0;
         if(ow>0&&ol>0){
             oa=ow*ol;
         }
         return a1+a2-oa;
    }
};