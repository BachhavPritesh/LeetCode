// Last updated: 5/12/2026, 2:39:18 PM
class Solution {
public:
  
    bool canAliceWin(vector<int>& nums) {
        int sing=0;
        int doub=0;
        int total=0;

        for(int i = 0;i<nums.size();i++){
       total+=nums[i];
          if(nums[i]<=9){
             sing+=nums[i];
          }
          else{
            doub+=nums[i];
          }
        }
        
         
return (sing > total - sing) || (doub > total - doub);
    }
};