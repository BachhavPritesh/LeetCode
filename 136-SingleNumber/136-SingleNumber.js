// Last updated: 4/9/2026, 11:12:34 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let set = new Set();
    for(let val of nums){
        if(set.has(val)){
            set.delete(val);
        }
        else{
            set.add(val);
        }
    }

    return [...set][0];
};