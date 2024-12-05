class Solution {
public:
    int hash[101] = {0};

    void count(vector<int> arr){
        sort(arr.begin(), arr.end());
        hash[arr[0]]++;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]!=arr[i-1])    hash[arr[i]]++;
        }
    }


    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        count(nums1);
        count(nums2);
        count(nums3);

        for(int i=1; i<101; i++){
            if(hash[i]>=2)   ans.push_back(i);
        }

        return ans;
    }
};