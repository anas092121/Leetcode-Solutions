class Solution {
public:
    bool isSubsequence(string s, string t) {
        if( s.size() > t.size())   return false;

        int j=0;
        for(int i=0; i<s.size(); i++){
            char ch=s[i];
            bool flag=false;
            while(j<t.size()){
                if(t[j]==ch){
                    flag=true;
                    j++;
                    break;
                }
                j++;
            }
            if(flag==false) return false;
        }
        return true;
    }
};