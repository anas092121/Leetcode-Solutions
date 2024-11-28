class Solution {
public:

    void rev(vector<int>& num){
        int st = 0;
        int e = num.size()-1;
        while(st<e){
            swap(num[st],num[e]);
            st++;
            e--;
        }
        // return num;
    }

    vector<int> addToArrayForm(vector<int>& num, int k) {
        rev(num);
        int carry = 0;
        for(int i=0; i<num.size(); i++){
            int a = k%10;
            k /= 10;
            int sum = num[i] + carry + a;
            num[i] = sum%10;
            carry = sum/10;
        }
        while(carry){
            int a = k%10;
            k /= 10;
            int sum = carry + a;
            num.push_back(sum%10);
            carry = sum/10;
        }
        while(k){
            int a = k%10;
            k /= 10;
            int sum = carry + a;
            num.push_back(sum%10);
            carry = sum/10;
        }
        rev(num);
        return num;
    }
};