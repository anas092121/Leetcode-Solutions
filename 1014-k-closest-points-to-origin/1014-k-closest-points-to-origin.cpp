class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> maxHeap;
        
        for (auto &p : points) {
            int x = p[0], y = p[1];
            int dist = x*x + y*y; 
            
            maxHeap.push({dist, {x, y}});
            if (maxHeap.size() > k) maxHeap.pop();
        }

        vector<vector<int>> ansPoints;
        while (!maxHeap.empty()) {
            auto [dist, pt] = maxHeap.top();
            maxHeap.pop();
            ansPoints.push_back({pt.first, pt.second});
        }

        return ansPoints;
    }
};
