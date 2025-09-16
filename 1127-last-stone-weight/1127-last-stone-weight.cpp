class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int it : stones){
            maxHeap.push(it);
        }

        while(maxHeap.size() > 1){
            int x = maxHeap.top();
            maxHeap.pop();

            int y = maxHeap.top();
            maxHeap.pop();

            if(x == y){
                if(maxHeap.size() == 0) return 0;
                continue;
            }

            int res = abs(x-y);

            maxHeap.push(res);
            
        }
        return maxHeap.top();
    }
};