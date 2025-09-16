class Solution {
public:
    string kthLargestNumber(vector<string>& arr, int k) {
        auto cmp = [](const string& a, const string& b) {
            return a.size() == b.size() ? a < b : a.size() < b.size();
        };
        priority_queue<string, vector<string>, decltype(cmp)> maxHeap(cmp);

        for (auto &it : arr) maxHeap.push(it);
        while (--k) maxHeap.pop();
        return maxHeap.top();
    }
};
