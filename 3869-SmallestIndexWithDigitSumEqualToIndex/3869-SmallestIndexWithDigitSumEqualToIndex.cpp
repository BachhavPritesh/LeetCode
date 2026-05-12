// Last updated: 5/12/2026, 2:38:59 PM
class Solution {
public:

  int digitSum(int x){
            int sum=0;
            while(x>0){
                int digit = x%10;
                sum+=digit;
                x/=10;
            }
            return sum;
        }
        
    int smallestIndex(vector<int>& nums) {

        for(int i =0;i<nums.size();i++){
            if(digitSum(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};