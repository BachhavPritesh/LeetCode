// Last updated: 6/9/2026, 9:34:52 AM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> upper,lower;

        for(char c:word){
            if(islower(c)){
                lower.insert(c);
            }
            else{
                upper.insert(tolower(c));
            }
        }
        int count = 0;

        for(char c : lower){
            if(upper.count(c)){
                count++;
            }
        }

        return count;
    }
};