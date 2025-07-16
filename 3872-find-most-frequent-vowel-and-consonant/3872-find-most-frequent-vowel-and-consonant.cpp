class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mp;
        for(auto it : s){
            mp[it]++;
        }

        int vowel = 0;
        int consonant = 0;
        for(auto it : mp){
            char ch = it.first;
            if(ch=='a'||
               ch=='e'||
               ch=='i'||
               ch=='o'||
               ch=='u'){
                vowel = max(it.second,vowel);
            }else{
                consonant = max(consonant, it.second);
            }
        }
        return vowel + consonant;
    }
};