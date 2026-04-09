// Last updated: 4/9/2026, 12:09:46 PM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left<right){
            if(!isalpha(s[left])){
                ++left;
            }
            else if(!isalpha(s[right])){
                --right;
            }
            else{
                swap(s[left],s[right]);
                ++left;
               --right;
            }
        }
        return s;
    }
};