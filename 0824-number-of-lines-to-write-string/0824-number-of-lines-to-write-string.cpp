class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int k = 1;
        int point = 0;
        for(int i= 0; i<s.size(); i++){
            int w = widths[s[i]-97];
            if((point + w) > 100){
                point = w;
                k++;
            }
            else{
                point += w; 
            }
        }
        vector<int> ans;
        ans.push_back(k);
        ans.push_back(point);
        return ans;
    }
};