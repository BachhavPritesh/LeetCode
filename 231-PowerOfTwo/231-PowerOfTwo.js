// Last updated: 4/9/2026, 11:12:28 AM
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    if (n <= 0) return false;
  while (n % 2 === 0) {
    n /= 2;
  }
  return n === 1;
};