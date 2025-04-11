class Solution {
public:
    int titleToNumber(string columnTitle) {
        // map<int,int> mp;
        // for(char i=0; )
        int count = 0;
        int ans = 0;

        for(int i=columnTitle.size()-1; i>=0; i--){
            int curr = pow(26,count) * (columnTitle[i] - 'A' + 1);
            count++;

            ans += curr; 
        }
        return ans;
    }
};