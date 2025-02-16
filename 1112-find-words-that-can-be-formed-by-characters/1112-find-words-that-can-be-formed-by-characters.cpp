class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        for (auto it : chars)
            mp[it]++;

        int ans = 0;
        for(auto word : words){
            unordered_map<char,int> freq;
            for(auto it : word) freq[it]++;

            bool flag = true;    
            for(auto it : freq){
                if(it.second > mp[it.first]){
                    flag = false;
                    break;
                }
            }

            if(flag)    ans += word.size();
        }    
        return ans;
    }
};