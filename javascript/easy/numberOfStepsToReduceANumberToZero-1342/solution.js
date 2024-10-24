/**
 * @param {number} num
 * @return {number}
 */

var numberOfSteps = function(num) {
    steps = 0;
    while (num != 0) {
        if (num % 2 === 0) {
            num /= 2
            steps += 1
            continue
        }

        else if (num % 2 != 0){
            num -= 1
            steps += 1
            continue
        }

        else {
            steps += 1
            break
        }
    };
    return steps
};