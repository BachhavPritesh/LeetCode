// Last updated: 5/12/2026, 2:39:56 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int current = 0;
     int maxm = 0;
     for(int num : gain){
        current+=num;
        maxm=max(maxm,current);
     }
     return maxm;
    }
};