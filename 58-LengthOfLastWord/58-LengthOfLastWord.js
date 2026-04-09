// Last updated: 4/9/2026, 11:12:44 AM
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let words = s.trim().split(" ");

    return words[words.length-1].length;
};