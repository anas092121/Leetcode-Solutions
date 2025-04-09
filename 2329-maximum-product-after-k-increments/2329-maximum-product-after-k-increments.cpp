class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(auto it : nums) minHeap.push(it);
        
        while(k--) {
            int temp = minHeap.top();
            minHeap.pop();
            temp++;
            minHeap.push(temp);
        }

        long long ans = 1;
        int mod = 1e9 + 7;
        while(!minHeap.empty()) {
            ans = (ans * minHeap.top()) % mod;
            minHeap.pop();
        }

        return ans;
    }
};
