// Last updated: 5/12/2026, 2:40:11 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxC = *max_element(candies.begin(),candies.end());
        vector<bool> res;

        for(int n : candies){
              res.push_back(n+extraCandies>=maxC);
        }
        return res;
    }
};