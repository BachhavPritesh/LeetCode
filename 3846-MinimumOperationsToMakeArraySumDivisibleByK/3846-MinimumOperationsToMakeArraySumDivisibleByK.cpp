// Last updated: 5/12/2026, 2:39:04 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
    for (int num : nums) sum += num;
    int remainder = sum % k;
    return remainder;
    }
};