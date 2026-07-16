// Last updated: 7/16/2026, 10:25:41 PM
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> freq(1001, 0);

        for (auto& arr : nums) {
            for (int num : arr) {
                freq[num]++;
            }
        }

        vector<int> ans;
        int n = nums.size();

        for (int num = 1; num <= 1000; num++) {
            if (freq[num] == n) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};