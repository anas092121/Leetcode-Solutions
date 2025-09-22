class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> mp;
        for (char it : s) mp[it]++;

        priority_queue<pair<int,char>> maxHeap;
        for (auto &it : mp) maxHeap.push({it.second,it.first});

        string res = "";
        while (!maxHeap.empty()) {
            auto top = maxHeap.top(); maxHeap.pop();
            if (!res.empty() && res.back() == top.second) {
                if (maxHeap.empty()) return "";
                auto next = maxHeap.top(); maxHeap.pop();
                res += next.second;
                if (--next.first > 0) maxHeap.push(next);
                maxHeap.push(top);
            } else {
                res += top.second;
                if (--top.first > 0) maxHeap.push(top);
            }
        }
        return res;
    }
};
