// Last updated: 5/12/2026, 2:39:41 PM
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans =INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                ans=min(ans,abs(i-start));
            }
        }
        return ans;
    };
};