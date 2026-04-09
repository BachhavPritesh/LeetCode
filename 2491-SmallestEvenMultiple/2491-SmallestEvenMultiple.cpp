// Last updated: 4/9/2026, 11:12:15 AM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n%2==0)?n:2*n;
    }
};