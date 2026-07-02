class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int s=arrivalTime + delayedTime ;
         if(s>=24){
           return (s%24);
         }
         return s;
    }
};