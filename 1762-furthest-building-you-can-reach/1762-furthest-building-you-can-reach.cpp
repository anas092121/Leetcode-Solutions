class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < heights.size() - 1; i++) {
            int diff = heights[i + 1] - heights[i];

            if (diff > 0) {
                pq.push(diff);
                if (pq.size() > ladders) {
                    if (bricks < pq.top())
                        return i;

                    bricks -= pq.top();
                    pq.pop();
                }
            }
        }
        return heights.size() - 1;
    }
};