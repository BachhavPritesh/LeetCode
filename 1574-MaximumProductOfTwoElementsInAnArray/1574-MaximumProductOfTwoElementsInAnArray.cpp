// Last updated: 5/12/2026, 2:40:07 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};