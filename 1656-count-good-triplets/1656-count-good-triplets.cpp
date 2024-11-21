class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        for(int i=0; i<arr.size()-2; i++){
            int fst = arr[i];
            for(int j=i+1; j<arr.size()-1; j++){
                int sec = arr[j];
                if( abs(arr[i]-arr[j]) <= a ){
                    for(int k=j+1; k<arr.size(); k++){
                        int third = arr[k];
                        if( abs( sec - arr[k]) <= b ){
                            if(abs(fst - third) <=c) {
                                count++;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};