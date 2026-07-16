// Last updated: 7/16/2026, 10:25:48 PM
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> freq(101, 0);
        int count = 0;

        for (int num : nums) {
            if (num - k >= 1) {
                count += freq[num - k];
            }
            if (num + k <= 100) {
                count += freq[num + k];
            }

            freq[num]++;
        }

        return count;
    }
};