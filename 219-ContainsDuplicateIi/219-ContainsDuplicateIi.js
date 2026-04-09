// Last updated: 4/9/2026, 11:12:30 AM
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {
     let set = new Set();

    for (let i=0; i < nums.length; i++) {
        if (set.has(nums[i])) {
            return true;
        }

        set.add(nums[i]);

        if (set.size > k) {
            set.delete(nums[i - k]);
        }
    }

    return false;
};