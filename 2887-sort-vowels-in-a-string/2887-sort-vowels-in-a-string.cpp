class Solution {
public:
    bool isVowel(char ch) {
        ch = std::tolower((unsigned char)ch);
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }


    string sortVowels(string s) {
        vector<char> vc;
        vector<int> vi;

        for(int i=0; i<s.size(); i++){
            if(isVowel(s[i])){
                vi.push_back(i);
                vc.push_back(s[i]);
            }
        }

        sort(vc.begin(), vc.end());
        for(int i=0; i<vi.size(); i++){
            s[vi[i]] = vc[i];
        }

        return s;
    }
};