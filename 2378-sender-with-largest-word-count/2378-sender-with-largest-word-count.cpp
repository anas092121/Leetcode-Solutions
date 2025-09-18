class Solution {
public:
    int countWords(const std::string& str) {
        stringstream ss(str);
        string word;
        int count = 0;
        while (ss >> word)
            count++;
        return count;
    }

    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string, int> mp;
        for (int i = 0; i < senders.size(); i++) {
            mp[senders[i]] += countWords(messages[i]);
        }

        string ans;
        int freq = 0;
        for(auto it : mp){
            if(it.second > freq){
                freq = it.second;
                ans = it.first;
            } else if(it.second == freq){
                ans = max(ans, it.first);
            }
        }
        return ans;
    }
};