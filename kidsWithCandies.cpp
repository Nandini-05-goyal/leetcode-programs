class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = *max_element(candies.begin(), candies.end());
        vector<bool> res;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= maximum){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};