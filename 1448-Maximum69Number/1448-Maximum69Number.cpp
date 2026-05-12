// Last updated: 5/12/2026, 2:40:16 PM
class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
       for(int i =0;i<s.size();i++){
        if(s[i]=='6'){
            s[i]='9';
            break;
        }

       }
       return stoi(s);
    }
};