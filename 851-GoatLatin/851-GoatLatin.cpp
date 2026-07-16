// Last updated: 7/16/2026, 10:26:31 PM
class Solution {
public:
     bool isVowel(char ch){
        ch = tolower(ch);

        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
     }
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string res = "";

        int count = 1;

        while(ss>>word){
            if(isVowel(word[0])){
                word+="ma";
            }
            else{
                char first  = word[0];
                word.erase(0,1);
                word+=first;
                word+="ma";
            }

            word+= string(count, 'a');

            res+= word+ " ";
            count++;
        }

        res.pop_back();
        return res;
    }
};