// Last updated: 4/9/2026, 11:12:59 AM
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const map = {
        I: 1,
        V: 5,
        X: 10,
        L: 50,
        C: 100,
        D: 500,
        M: 1000
    };

    let res = 0;

    for(let i = 0;i<s.length;i++){
        let current = map[s[i]];
        let next = map[s[i+1]];

        if(next&&current<next){
            res-=current;
        }
        else{
            res+=current;
        }
    }

    return res;
};