/**
 * @param {number[][]} accounts
 * @return {number}
 */

var maximumWealth = function(accounts) {

    richest = 0
    for (k = 0; k < accounts.length; k++) {
        wealth = accounts[k].reduce((partialSum, a) => partialSum + a, 0)

        if (richest < wealth) {
            richest = wealth
        };
    }

    return richest
};