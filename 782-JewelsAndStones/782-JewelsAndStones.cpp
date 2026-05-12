// Last updated: 5/12/2026, 2:40:38 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char c:jewels){
            for(char s:stones){
                if(c==s){
                    count++;
                }
            }
        }
        return count;
    }
};