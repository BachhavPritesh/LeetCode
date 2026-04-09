// Last updated: 4/9/2026, 11:12:41 AM
/**
 * @param {number} x
 * @return {number}
 */
function mySqrt(x) {
    if (x < 2) return x;

    let left = 1;
    let right = Math.floor(x / 2);
    let res = 0;

    while (left <= right) {
        let mid = Math.floor((left + right) / 2);
        let square = mid * mid;

        if (square == x) {
            return mid;
        } else if (square < x) {
            res = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return res;
}