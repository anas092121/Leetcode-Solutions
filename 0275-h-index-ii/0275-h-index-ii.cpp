class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int h = 0;
        for (int i = 0; i < n; i++) {
            int total = n - i;
            h = max(h, min(citations[i], total));
        }
        return h;
    }
};