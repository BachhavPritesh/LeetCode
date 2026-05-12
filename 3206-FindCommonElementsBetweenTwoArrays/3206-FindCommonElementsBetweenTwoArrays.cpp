// Last updated: 5/12/2026, 2:39:23 PM
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());

        int c1 = 0;
        int c2 = 0;

        for(int n: nums1){
            if(s2.count(n)){
                c1++;
            }
        }

        for(int n:nums2){
            if(s1.count(n)){
                c2++;
            }
        }

        return {c1,c2};
    }
};