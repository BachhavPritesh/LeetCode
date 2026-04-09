// Last updated: 4/9/2026, 11:12:56 AM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int left = 0, right = nums.size() - 1;

       
        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] == target){
                first = mid;
                right = mid - 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        left = 0;
        right = nums.size() - 1;

     
        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] == target){
                last = mid;
                left = mid + 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return {first, last};
    }
};