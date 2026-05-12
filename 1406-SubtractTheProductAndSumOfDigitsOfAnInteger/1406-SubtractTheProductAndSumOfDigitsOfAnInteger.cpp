// Last updated: 5/12/2026, 2:40:19 PM
class Solution {
public:
    int digit(int x){
        int sum = 0;
        int product = 1;
        while(x>0){
            int digit = x%10;
            sum+=digit;
            product*=digit;
            x/=10;
        }

        return product-sum;
    }
    int subtractProductAndSum(int n) {
        int diff = digit(n);
        return diff;
    }
};