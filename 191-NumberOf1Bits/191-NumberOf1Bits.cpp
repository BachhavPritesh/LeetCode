// Last updated: 5/12/2026, 2:41:10 PM
class Solution {
public:
    int hammingWeight(int n) {
    int count = 0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
    }
};