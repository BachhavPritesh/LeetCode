// Last updated: 4/9/2026, 11:13:05 AM
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
       let original, rev = 0, digit;
    original = x;
    
    while(x > 0){
        digit = x % 10;
        rev = rev * 10 + digit;
        x = Math.floor(x / 10);
    }
    
    if(rev === original){
        return true;
    } else {
        return false;
    } 
};