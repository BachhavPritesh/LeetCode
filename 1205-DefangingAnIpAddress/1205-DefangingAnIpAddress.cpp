// Last updated: 5/12/2026, 2:40:25 PM
class Solution {
public:
    string defangIPaddr(string address) {
       string res ="";
       for(char c : address){
        if(c=='.'){
            res+="[.]";
        }
        else{
            res+=c;
        }
       }
       return res;
    }
};