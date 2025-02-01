class Solution {
public:
    int minimizedStringLength(string s) {
        map<char,int> mp;
        for(auto it : s){
            mp[it]++;
        }
        return mp.size();
    }
};