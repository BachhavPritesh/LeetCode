// Last updated: 5/16/2026, 7:24:01 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;

        for(int n:nums){
            res.push_back(n);
        }
        for(int n:nums){
             res.push_back(n);
        }

        return res;
    }
};