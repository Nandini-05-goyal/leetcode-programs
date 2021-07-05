class Solution {
public:
    vector<int> shuffle(vector<int>& number, int n) {
        vector<int> ans;
        for(int i = 0 ; i <n ;i++){
            ans.push_back(number[i]);
            ans.push_back(number[i+n]);
        }
        return ans;
    }
};