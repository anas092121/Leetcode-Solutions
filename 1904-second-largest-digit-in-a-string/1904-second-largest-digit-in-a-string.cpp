class Solution {
public:
    int secondHighest(string s) {
        map<int,int> mp;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                mp[s[i] - '0'];
            }
        }
        
        if(mp.size()<2){
            return -1;
        }
        int maxi = -1;
        for(auto it: mp){
            maxi = max(it.first,maxi);
        }
        int ans = -1;
        for(auto it : mp){
            if(it.first!=maxi && it.first>ans){
                ans = it.first;
            }
        }
        return ans;

    }
};