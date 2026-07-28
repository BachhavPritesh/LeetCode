class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        for(int i=1;i<nums.size();i+=2){
           res.push_back(nums[i]);
           res.push_back(nums[i-1]);
        }

        return res;
    }
};