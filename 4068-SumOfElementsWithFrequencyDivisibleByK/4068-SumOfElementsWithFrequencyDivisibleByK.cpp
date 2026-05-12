// Last updated: 5/12/2026, 2:38:50 PM
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
     unordered_map<int,int> f;
     for(int num:nums){
        f[num]++;
     }

     int res=0;

     for(auto& [num,count]:f){
        if(count%k==0){
            res+=count*num;
        }
     }
     return res;
    }
};