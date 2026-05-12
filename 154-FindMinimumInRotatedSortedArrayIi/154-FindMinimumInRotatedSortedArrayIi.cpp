// Last updated: 5/12/2026, 2:41:12 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;

        for(int n:nums){
            ans=min(ans,n);
        }
        return ans;
    }
};