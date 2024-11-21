class Solution {
public:
    int unequalTriplets(vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < arr.size() - 2; i++) {
            int fst = arr[i];
            for (int j = i + 1; j < arr.size() - 1; j++) {
                int sec = arr[j];
                if (fst != sec) {
                    for (int k = j + 1; k < arr.size(); k++) {
                        int third = arr[k];
                        if ( sec!= third ) {
                            if ( third != fst ) {
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