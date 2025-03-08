class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        int count = 0;
        queue<int> Q;
        int flag = k;
        int i=0;

        while(flag--){
            if(s[i] == 'a' 
                || s[i] == 'e' 
                || s[i] == 'i' 
                || s[i] == 'o' 
                || s[i] == 'u'){
                    count++;
            }
            Q.push(s[i]);
            i++;
        }
        ans = max(ans,count);



        for(int i=k; i<=s.size(); i++){
            int front = Q.front();
            if(front == 'a' 
                || front == 'e' 
                || front == 'i' 
                || front == 'o' 
                || front == 'u'){
                    count--;
            }
            Q.pop();
            if(s[i] == 'a' 
                || s[i] == 'e' 
                || s[i] == 'i' 
                || s[i] == 'o' 
                || s[i] == 'u'){
                    count++;
            }
            Q.push(s[i]);

            ans = max(ans,count);
        }
        return ans;
    }
};