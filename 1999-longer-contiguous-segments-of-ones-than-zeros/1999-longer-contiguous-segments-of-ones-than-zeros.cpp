class Solution {
public:
    int solve(string s){
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                int temp = 1;
                for(int j = i+1; j<s.size(); j++){
                    if(s[j]=='1'){
                        temp++;
                    }
                    else{
                        break;
                    }
                }
                ans = max(ans,temp);
            }
        }
        return ans;
    }
    int zero(string s){
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                int temp = 1;
                for(int j = i+1; j<s.size(); j++){
                    if(s[j]=='0'){
                        temp++;
                    }
                    else{
                        break;
                    }
                }
                ans = max(ans,temp);
            }
        }
        return ans;

    }

    bool checkZeroOnes(string s) {
        int oneCount = solve(s);
        int zeroCount = zero(s);

        cout<<zeroCount<<endl<<oneCount;
        return oneCount>zeroCount;

    }
};