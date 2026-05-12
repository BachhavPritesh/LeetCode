// Last updated: 5/12/2026, 2:40:43 PM
class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string res = "";

        for(int i = 0;i<s.size();i++){
            if(s[i]==' '){
                reverse(word.begin(),word.end());
                res+=word;
                res+=" ";
                word="";
            }
           else{
            word+=s[i];
           }
        }

        reverse(word.begin(),word.end());
        res+=word;

        return res;
    }
};