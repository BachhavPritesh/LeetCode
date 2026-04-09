// Last updated: 4/9/2026, 11:12:49 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left +=1;
            }
            else{
                right -=1;
            }
        }

        return left;
    }
};