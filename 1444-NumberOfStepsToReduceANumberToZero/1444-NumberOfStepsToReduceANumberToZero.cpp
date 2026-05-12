// Last updated: 5/12/2026, 2:40:17 PM
class Solution {
public:
    int numberOfSteps(int num) {
         int steps = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            num /= 2;   
        } else {
            num -= 1;   
        }
        steps++;
    }
    return steps;
    }
};