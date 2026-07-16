// Last updated: 7/16/2026, 10:26:17 PM
class Solution {
public:
    int balancedStringSplit(string s) {
        int x = 0;
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                x++;
            }
            if(s[i]=='R'){
                x--;
            }
            if(x==0){
                count++;
            }
        }
        return count;

    }
};