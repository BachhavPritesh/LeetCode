// Last updated: 5/12/2026, 2:39:44 PM
class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i += 2) {
            
       
            int shift = s[i] - '0';
            
           
            s[i] = s[i - 1] + shift;
        }
        
        return s;
    }
};