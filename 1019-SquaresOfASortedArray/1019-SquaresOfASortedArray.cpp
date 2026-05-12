// Last updated: 5/12/2026, 2:40:26 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;

        for(int num : nums){
            res.push_back(num*num);
        }

        sort(res.begin(),res.end());

        return res;
    }
};