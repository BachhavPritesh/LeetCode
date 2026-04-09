// Last updated: 4/9/2026, 11:12:25 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    // int m = 0;

    // for(int i =0;i<nums.size();i++){
    //     if(nums[i] != 0){
    //         swap(nums[i],nums[m]);
    //         m++;
    //     }
    // }

    int j = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            ++j;
        }
    }

    for(int i=j;i<nums.size();i++){
        nums[i]=0;
    }
    }
};