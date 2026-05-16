// Last updated: 5/16/2026, 7:24:16 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;

        for(int i =0;i<n;i++){
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);
        }

        return res;
    }
};