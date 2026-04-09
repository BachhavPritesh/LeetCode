// Last updated: 4/9/2026, 11:12:42 AM
class Solution {
public:
    int climbStairs(int n) {
        if(n<2){
            return n;
        }

        int p1 = 1;
        int p2 = 2;

        for(int i = 3;i<=n;i++){
            int current = p1+p2;
            p1 = p2;
            p2 = current;
        }

        return p2;
    }
};