// Last updated: 4/9/2026, 11:13:01 AM
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
      const stack = [];
    const map = {
        ')': '(',
        '}': '{',
        ']': '['
    };
    for (let char of s) {  
        if (map[char]) {
            const top = stack.pop();
            if (top !== map[char]) {
                return false;
            }
        } else {    
            stack.push(char);
        }
    }
    return stack.length === 0;
};