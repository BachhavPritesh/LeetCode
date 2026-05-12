// Last updated: 5/12/2026, 2:39:14 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> f;
        vector<int> res;

        for (int n : nums) {
            f[n]++;
            if (f[n] == 2) {
                res.push_back(n);
            }
        }

        return res;
    }
};