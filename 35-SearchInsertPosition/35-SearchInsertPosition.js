// Last updated: 4/9/2026, 11:12:53 AM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    let left = 0;
    let right = nums.length-1;

    while(left<=right){
        let mid = Math.floor((left+right)/2);

        if(nums[mid]===target){
            return mid;
        }
        else if(nums[mid]<target){
           left = left+1;
        }
        else{
            right = right - 1;
        }
    }

    return left;
};