// Last updated: 5/12/2026, 2:39:54 PM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        int sum = 0;

        for(int n:nums){
            m[n]++;
        }

        for(auto it:m){
            if(it.second==1){
                sum+=it.first;
            }
        }
        return sum;

    }
};