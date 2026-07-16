// Last updated: 7/16/2026, 10:26:44 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0, read = 0;
        while(read < chars.size()){
            char current_char = chars[read];
            int count = 0;
            while(read < chars.size() &&  chars[read] == current_char){
                ++read;
                ++count;
            }
            chars[write++] = current_char; 
            if(count>1){
                string countStr = to_string(count);
                for(char c : countStr){
                    chars[write++] = c;
                }
            }
                   }
                   return write;
    }
};