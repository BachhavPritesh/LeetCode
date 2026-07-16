// Last updated: 7/16/2026, 10:26:35 PM
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int maxindex = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[maxindex]) {
                maxindex = i;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i != maxindex && nums[maxindex] < 2 * nums[i]) {
                return -1;
            }
        }

        return maxindex;
    }
};