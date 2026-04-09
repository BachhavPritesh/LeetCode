// Last updated: 4/9/2026, 11:12:31 AM
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    // let count = 0;
    // for(let i = 0;i<nums.length;i++){
    //     for(let j=i+1;j<nums.length;j++){
    //             if(nums[i]===nums[j]){
    //                 count++;
    //             }
    //     }
    // }

    // if(count!=0){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    let obj={}
    for(i=0;i<nums.length;i++){
        if(obj[nums[i]]==undefined) obj[nums[i]]=1;
        else return true
    }
    return false
};