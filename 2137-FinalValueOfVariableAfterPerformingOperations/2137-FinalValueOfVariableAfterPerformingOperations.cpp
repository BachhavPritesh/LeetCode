// Last updated: 5/16/2026, 7:23:56 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string s:operations){
            if(s[1]=='+'){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};