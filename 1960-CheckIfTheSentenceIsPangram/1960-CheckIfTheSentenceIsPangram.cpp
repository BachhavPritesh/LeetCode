// Last updated: 5/12/2026, 2:39:43 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
       unordered_set<char> s;
       for(char c: sentence){
        s.insert(c);
       } 
       return s.size()==26;
    }
};