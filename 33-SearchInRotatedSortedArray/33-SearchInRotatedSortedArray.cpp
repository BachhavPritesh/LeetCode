// Last updated: 5/12/2026, 2:41:37 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
                break;
            }
        }
        return -1;
    }
};