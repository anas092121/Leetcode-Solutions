class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int sum = 0;
        int store = 0;
        for(auto it : apple)    sum += it;
        int k=0;
        for(int i=capacity.size()-1; i>=0; i--){
            k++;
            store += capacity[i];
            if(store >= sum)    return k;
        }
        return -1;
    }
};