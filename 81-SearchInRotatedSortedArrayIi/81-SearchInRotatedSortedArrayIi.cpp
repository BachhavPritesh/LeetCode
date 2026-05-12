// Last updated: 5/12/2026, 2:41:24 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
       for(int n:nums){
        if(n==target){
            return true;
            break;
        }
       }
       return false;
    }
};