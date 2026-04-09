// Last updated: 4/9/2026, 11:12:35 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
function majorityElement(nums) {
    let count = 0;
    let res = null;

    for (let num of nums) {
        if (count === 0) {
            res = num; 
        }

        count += (num === res) ? 1 : -1;
    }

    return res;
}

