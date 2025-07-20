class Solution {
public:
    string triangleType(vector<int>& vt) {
        int a=vt[0], b=vt[1], c=vt[2];
        if(!((a+b)>c && (b+c)>a && (c+a)>b)){
           return "none"; 
        }

       set<int> st(vt.begin(), vt.end());
       return st.size()==1 ? "equilateral" : st.size()==2 ? "isosceles" : "scalene" ;
    }
};