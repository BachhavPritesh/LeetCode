// Last updated: 5/12/2026, 2:41:14 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int mins = INT_MAX;
        for(int n:nums){
            mins=min(mins,n);
        }
        return mins;
    }
};