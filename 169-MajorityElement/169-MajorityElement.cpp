// Last updated: 4/9/2026, 11:12:32 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = 0;
        // int count = 0;

        // for(int num:nums){
        //       if(count==0){
        //         n=num;
        //       }
        //       if(num==n){
        //         count++;
        //       }
        //       else{
        //         count--;
        //       }
        // }
        // return n;

        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++; //key exist current value(freq) inc count and key doesnot exist create key and value.
        }

        int l = nums.size()/2;
        for(auto it:freq){
            if(it.second>l){
                return it.first;
            }
        }
        return -1;
    }
};