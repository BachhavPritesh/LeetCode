// Last updated: 4/9/2026, 11:12:23 AM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // for(int i = 0;i<nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return 0;

        // sort(nums.begin(),nums.end());
        //  for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] == nums[i-1]){
        //         return nums[i];
        //     }
        // }
        // return -1;

    //   unordered_set<int> s;
    //     for(int num : nums){
    //         if(s.count(num)) return num;
    //         s.insert(num);
    //     }
    //     return -1;

    unordered_map<int,int> freq;
    for(int num : nums){
        freq[num]++;

        if(freq[num]>1){
            return num;
        }
    }
    return -1;
    }
};