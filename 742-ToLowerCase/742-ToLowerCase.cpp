// Last updated: 5/12/2026, 2:40:39 PM
class Solution {
public:
    string toLowerCase(string s) {
        for(int i =0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        return s;
    }
};