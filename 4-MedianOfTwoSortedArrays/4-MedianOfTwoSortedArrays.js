// Last updated: 4/9/2026, 11:13:08 AM
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    let arr = nums1.concat(nums2).sort((a,b)=>a-b);
    let len = arr.length;
    let mid = Math.floor(len/2);
    if(len%2==0){
        return (arr[mid-1]+arr[mid])/2;
    }
    else{
        return arr[mid];
    }
};
