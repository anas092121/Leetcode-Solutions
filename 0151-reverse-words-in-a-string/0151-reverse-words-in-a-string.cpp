class Solution {
public:
    string reverseWords(string str) {
        int start=0;
        int end = str.size() - 1;
        while (start < end) {
            swap(str[start], str[end]);
            start++, end--;
        }

        start = 0;
        for (int i = 0; i < str.size() + 1; i++) {
            if (str[i] == ' ' || str[i] == '\0') {
                int s = start;
                int e = i - 1;

                while (s < e) {
                    swap(str[s], str[e]);
                    s++;
                    e--;
                }
                start = i + 1;
            }
        }

        str.erase(0, str.find_first_not_of(' '));
        str.erase(str.find_last_not_of(' ') + 1);

        for(int i=0; i<str.size()-1; i++){
            if(str[i]==' '&&str[i+1]==' '){
                str.erase(i,1);
                i=max(i-1,0);
            }
        }

        return str;

    }
    };
