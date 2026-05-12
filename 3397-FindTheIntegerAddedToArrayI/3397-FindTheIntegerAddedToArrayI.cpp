// Last updated: 5/12/2026, 2:39:19 PM
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int x = nums2[0]-nums1[0];

        for(int i = 0;i<nums1.size();i++){
            if(nums2[i]-nums1[i]!=x){
                return -1;
            }
        }
        return x;
    }
};