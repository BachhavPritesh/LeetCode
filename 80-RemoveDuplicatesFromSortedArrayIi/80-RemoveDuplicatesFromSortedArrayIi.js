// Last updated: 4/9/2026, 11:12:39 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let k = 0;
    for (let i = 0; i < nums.length; i++) {
        if (k < 2 || nums[i] !== nums[k - 2]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
};