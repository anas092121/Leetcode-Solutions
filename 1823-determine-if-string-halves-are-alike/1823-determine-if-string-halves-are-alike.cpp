class Solution {
public:
    bool halvesAreAlike(string s) {
        int start = 0;
        int end = s.size()-1;
        int a=0,b=0;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(start<end){
            char x = s[start];
            char y = s[end];
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
                a++;
            }
            if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u'){
                b++;
            }
            start++,end--;
        }
        return a==b;
    }
};