// Last updated: 7/16/2026, 10:26:26 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       vector<int> result;
       for(int n:nums){
        if(n%2==0){
            result.insert(result.begin(),n);
        }
        else{
            result.push_back(n);
        }
       }
       return result;
    }
};