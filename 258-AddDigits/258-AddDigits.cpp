// Last updated: 5/12/2026, 2:41:02 PM
class Solution {
public:
    int addDigits(int num) { 
   while (num >= 10) {   
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  
            num /= 10;        
        }
        num = sum;  
    }
    return num;
    }
};