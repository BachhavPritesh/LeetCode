// Last updated: 5/12/2026, 2:39:48 PM
class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream w(s);
        string word;
        string res;
        int count =0;

        while(w >> word){
            if(count==k) break;
            if(count>0){
                res+=" ";
            }
            res+=word;
            count++;
        }
        return res;
    }
    
};