class Solution {
public:
    int minDeletion(string s, int k) {
        map<char, int> mp;
        for (auto it : s) {
            mp[it]++;
        }

        vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](pair<char, int>& a, pair<char, int>& b) {
            return a.second < b.second;
        });

        // for (auto& it : vec) {
        //     cout << "Element: " << it.first << ", Frequency: " << it.second
        //          << endl;
        // }

        int d = vec.size() - k;

        if(d<=0)    return 0;
        else{
            int ans = 0;
            for(int i=0; i<d; i++){
                ans += vec[i].second;
            }
            return ans;
        }

        return 0;
    }
};