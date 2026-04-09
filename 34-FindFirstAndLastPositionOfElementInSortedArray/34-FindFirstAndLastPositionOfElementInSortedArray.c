// Last updated: 4/9/2026, 11:12:51 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int first = -1;
    int last = -1;
    int left = 0;
    int right = numsSize-1;

    while(left<=right){
        int mid = (right+left)/2;

        if(nums[mid]==target){
            first=mid;
            right=right-1;
        }
        else if(nums[mid]>target){
            right=right-1;
        }
        else{
            left=left+1;
        }
    }

    left=0;
    right=numsSize-1;

   while(left<=right){
        int mid = (right+left)/2;

        if(nums[mid]==target){
            last=mid;
            left=left+1;
        }
        else if(nums[mid]>target){
            right=right-1;
        }
        else{
            left=left+1;
        }
    }

        int* result = (int*)malloc(2 * sizeof(int));
    result[0] = first;
    result[1] = last;

    *returnSize = 2;

    return result;

}