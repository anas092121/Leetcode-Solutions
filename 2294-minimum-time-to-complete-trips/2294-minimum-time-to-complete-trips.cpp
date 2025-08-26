class Solution {
public:
    bool canBeCompleted(long long timeTaken, vector<int>& time, long long totalTrips) {
        long long trips = 0;
        for(auto t : time){
            trips += timeTaken / t;
            if(trips >= totalTrips) return true; // early exit
        }
        return trips >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1;
        long long high = 0;
        for(long long t : time){
            high = max(high, t);
        }
        high = high * totalTrips;

        while(low <= high){
            long long mid = low + (high - low)/2;

            if(canBeCompleted(mid, time, totalTrips)){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
