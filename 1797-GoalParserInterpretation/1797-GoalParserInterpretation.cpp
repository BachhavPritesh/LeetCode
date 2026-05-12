// Last updated: 5/12/2026, 2:39:58 PM

class Solution {
public:
    string interpret(string command) {
        string result = "";
        
        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'G') {
                result += 'G';
            } 
            else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    result += 'o';
                    i++; 
                } else {
                    result += "al";
                    i += 3; 
                }
            }
        }
        
        return result;
    }
};

