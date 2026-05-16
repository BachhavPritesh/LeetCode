// Last updated: 5/16/2026, 7:24:00 PM
class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for(int i = 1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        return count==3;
    }
};