// Last updated: 5/12/2026, 2:40:29 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc =true;
        bool dec =true;

        for(int i =1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                dec=false;
            }
            if(nums[i]<nums[i-1]){
                inc=false;
            }
        }

        return inc||dec;
    }
};