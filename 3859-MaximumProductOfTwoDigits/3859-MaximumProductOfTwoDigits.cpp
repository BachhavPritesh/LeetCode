// Last updated: 5/12/2026, 2:39:02 PM
class Solution {
public:
    int maxProduct(int n) {
        vector<int> res;
        while(n>0){
            int digit=n%10;
            res.push_back(digit);
            n/=10;
        }
        sort(res.begin(),res.end());
        int p = res[res.size()-1]*res[res.size()-2];
        return p;
    }
};