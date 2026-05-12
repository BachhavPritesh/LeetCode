// Last updated: 5/12/2026, 2:41:09 PM
class Solution {
public:
    int digitSum(int x){
        int sum = 0;
        while(x>0){
            int digit = x%10;
            sum+=digit*digit;
            x/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1 && s.count(n)==0){
             s.insert(n);
             n=digitSum(n);
        }

        return n==1;
    }
};