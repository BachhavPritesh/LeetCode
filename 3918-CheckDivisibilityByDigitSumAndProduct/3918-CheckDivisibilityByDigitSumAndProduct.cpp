// Last updated: 5/12/2026, 2:38:58 PM
class Solution {
public:
    bool checkDivisibility(int n) {
        int res;
        int s=0;
        int p=1;
        int original=n;
        while(n>0){
            int digit=n%10;
            s+=digit;
            p*=digit;
            n/=10;
        }

    res=s+p;

    return (original%res==0);
    }
};