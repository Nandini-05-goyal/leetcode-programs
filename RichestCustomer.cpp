class Solution {
public:
    int maximumWealth(vector<vector<int>>& accnt) {
        int max = 0, sum;
        for(auto i :accnt){
            sum = 0;
            for(auto j : i)
                sum +=j;
            max = max(sum,max);
        }
        return max;
    }
};