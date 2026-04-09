// Last updated: 4/9/2026, 11:12:36 AM
/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
       const c = s.toLowerCase().replace(/[^a-z0-9]/g, "");
    return c === c.split("").reverse().join("");
};