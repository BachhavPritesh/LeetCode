class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int exSum = n*(n+1)/2;
       int actualSum = 0;

       for(int i:nums){
        actualSum +=i;
       }

       return exSum-actualSum;
    }
};