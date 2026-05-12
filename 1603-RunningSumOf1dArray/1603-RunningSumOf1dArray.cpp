// Last updated: 5/12/2026, 2:40:04 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> res;
        for(int n : nums){
            sum+=n;
            res.push_back(sum);
        }
        return res;
    }
};