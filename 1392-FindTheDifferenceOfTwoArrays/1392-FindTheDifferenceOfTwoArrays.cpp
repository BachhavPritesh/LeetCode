// Last updated: 5/12/2026, 2:40:21 PM
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());

       vector<int> c1,c2;

         for(int n:s1){
            if(!s2.count(n)){
                c1.push_back(n);
            }
         }

         for(int n:s2){
            if(!s1.count(n)){
                c2.push_back(n);
            }
         }

         return {c1,c2};
    }
};