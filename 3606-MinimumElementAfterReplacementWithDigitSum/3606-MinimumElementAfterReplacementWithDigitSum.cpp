// Last updated: 5/12/2026, 2:39:10 PM
class Solution {
public:
    int digitSum(int x){
        int sum = 0;
        while(x>0){
            int digit = x%10;
            sum+=digit;
            x/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            nums[i]=digitSum(nums[i]);
        }
        
        return *min_element(nums.begin(),nums.end());;
    }
};