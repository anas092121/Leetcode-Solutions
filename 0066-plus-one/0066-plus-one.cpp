class Solution {
public:

    void rev(vector<int>& digits){
        int st=0;
        int end=digits.size()-1;
        while(st<end){
            swap(digits[st],digits[end]);
            st++;
            end--;
        }
    }

    vector<int> plusOne(vector<int>& digits) {
        rev(digits);
        int carry=1;
        for(int i=0; i<digits.size(); i++){
            if(carry){
                int sum=carry+digits[i];
                carry=sum/10;
                sum=sum%10;
                digits[i] = sum;
            }
        }
        if(carry){
            digits.push_back(carry);
        }
        rev(digits);
        return digits ; 
    }
};