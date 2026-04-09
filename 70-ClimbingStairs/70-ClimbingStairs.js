// Last updated: 4/9/2026, 11:12:45 AM
/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    if(n<2){
        return n;
    }

    let p1 = 1;
    let p2 = 2;

    for(let i = 3;i<=n;i++){
        let current = p1+p2;
        p1=p2;
        p2=current;
    }

    return p2;

};