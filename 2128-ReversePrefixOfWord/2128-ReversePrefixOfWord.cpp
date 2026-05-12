// Last updated: 5/12/2026, 2:39:40 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
      int p = -1;

      for(int i =0;i<word.size();i++){
        if(word[i]==ch){
            p=i;
            break;
        }
      }

       int left = 0;
    int right = p;

    while(left<right){
        swap(word[left],word[right]);
        left++;
        right--;

    }

    return word;
    }

   
};