// Last updated: 6/9/2026, 9:35:08 AM
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());\
        vector<int> res;
        for(int i =0;i<nums.size();i++){
             if(nums[i]==target){
                res.push_back(i);
             }
        }
        return res;
    }
};