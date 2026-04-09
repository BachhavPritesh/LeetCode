// Last updated: 4/9/2026, 11:12:18 AM
/**
 * @param {string[]} names
 * @param {number[]} heights
 * @return {string[]}
 */
var sortPeople = function(names, heights) {
    let arr = [];

    for(let i =0;i<names.length;i++){
        arr.push({name:names[i],height:heights[i]});

    }

    arr.sort((a,b)=>(b.height-a.height));

    let res = [];

    for(let i = 0;i<names.length;i++){
        res.push(arr[i].name)
    }

    return res;
};