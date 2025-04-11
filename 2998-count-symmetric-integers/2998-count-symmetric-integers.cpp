class Solution {
public:
    bool symmetric(int x) {
        string s = to_string(x);
        if(s.length()%2 != 0)   return false; 
        int mid = s.length() / 2;
        string first_half = s.substr(0, mid);
        string second_half = s.substr(mid);
        
        int sumOne = 0;
        for(auto it : first_half){
            sumOne += it-'0';
        }

        int sumTwo = 0;
        for(auto it : second_half){
            sumTwo += it-'0';
        }

        return sumOne == sumTwo;
    }


    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++) {
            if (symmetric(i)) {
                count++;
            }
        }
        return count;
    }
};