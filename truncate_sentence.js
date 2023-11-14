/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
    const result = s.split( );
    let result_string = ;
    for(let i=0; i<k; i++){
        result_string += result[i];
        if(i < k-1 ) result_string +=  ;
    }
    return result_string;
};
