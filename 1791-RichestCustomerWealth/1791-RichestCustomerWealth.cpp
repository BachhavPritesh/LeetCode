// Last updated: 5/16/2026, 7:24:10 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxm = INT_MIN;

        for(auto& n:accounts){
            int sum = 0;
            for(int v:n){
                sum+=v;
            }
            maxm=max(maxm,sum);
        }
        return maxm;
    }
};