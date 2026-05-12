// Last updated: 5/12/2026, 2:40:51 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left=1,right=num;

     while(left<=right){
        long long mid = left+(right-left)/2;
        long long square = mid*mid;
        if(num == square){
            return true;
        }
        else if(square<num){
            left = mid+1;
        }
        else{
            right = mid-1;
        }

     }
     return false;
    }
};