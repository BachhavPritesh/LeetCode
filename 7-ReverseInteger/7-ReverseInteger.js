// Last updated: 4/9/2026, 11:13:06 AM
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    const sign = x < 0 ? -1 : 1;
    x = Math.abs(x);

    let rev = 0;

    while (x > 0) {
        let digit = x % 10;
        x = Math.floor(x / 10);

       
        if (rev > 214748364 || (rev === 214748364 && digit > 7)) {
            return 0;
        }

        rev = rev * 10 + digit;
    }

    return rev * sign;
};