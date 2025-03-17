class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        for(int i=arr.size()-1; i>=0; i--){
            int x = maxi;
            maxi = max(maxi, arr[i]);
            arr[i] = x;
        }
        return arr;
    }
};