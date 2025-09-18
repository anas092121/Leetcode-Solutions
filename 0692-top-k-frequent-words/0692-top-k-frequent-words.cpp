struct Comparater{
    bool operator()(pair<string,int> p1, pair<string,int> p2){
        if(p1.second == p2.second){
            return p2.first > p1.first;
        }
        return p1.second > p2.second;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto word : words){
            mp[word]++;
        }

        priority_queue<pair<string,int>, vector<pair<string,int>>, Comparater> minHeap;
        for(auto word : mp){
            minHeap.push(word);
            if(minHeap.size() > k)  minHeap.pop();
        }
        vector<string> res;
        while(!minHeap.empty()){
            res.push_back(minHeap.top().first);
            minHeap.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};