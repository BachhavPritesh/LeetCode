// Last updated: 5/12/2026, 2:39:26 PM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
    //     vector<int> res;
    //  for(int n: nums){
    //     vector<int> temp;
    //     while(n>0){
    //         temp.push_back(n%10);
    //         n/=10;
    //     }

    //     reverse(temp.begin(),temp.end());

    //     for(int m:temp){
    //         res.push_back(m);
    //     }
    //  }
    //  return res;


     vector<int> res;

     for(int n:nums){
        string s = to_string(n);
        
        for(char c:s){
            res.push_back(c-'0');
        }
     }

     return res;
    }
};