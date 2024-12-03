class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        string ans;
        int i, j=0, k=0;
        vector<int> even;
        vector<int> odd;
        for(i=0 ; i<s.size() ; i++)
        {
            if((int)s[i]%2==0)
                even.push_back((int)s[i]);
            else
                odd.push_back((int)s[i]);
        }

        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());

        for(i=0 ; i<s.size() ; i++)
        {
            if((int)s[i]%2==0)
            {
                ans += even[j];
                j++;
            }
            else
            {
                ans += odd[k];
                k++;
            }
        }
        return stoi(ans);
    }
};