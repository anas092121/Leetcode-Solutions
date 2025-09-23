class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0;
        int right = height.size() - 1;

        while(left<right){
            int a = height[left];
            int b = height[right];

            int length = min(a,b);
            int breadth = right - left;

            int area = length * breadth;
            ans = max(area, ans);

            if(a < b)   left++;
            else right--;
        }
        return ans;
    }
};