class Solution {
public:

    bool canBePlaced(int capacity, vector<int> weights, int days){
        int sum = 0;
        int d = 1;
        for(auto it : weights){
            sum += it;
            if(sum > capacity){
                d++;
                sum = it;
            }
        }
        return d <= days;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = weights[0];
        int high = 0;
        for(auto it : weights){
            maxi = max(maxi,it);
            high += it;
        }
        int low = maxi;

        while(low<=high){
            int mid = (low+high)/2;
            int capacity = mid;

            if(canBePlaced(capacity, weights, days)){
                high = capacity-1;
            }else{
                low = capacity + 1;
            }
        }
        return low;
    }
};



