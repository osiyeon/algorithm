const fs = require('fs')

const input = fs.readFileSync(0).toString().trim().split('\n');

let answer = 0;

const numberList = input[1].split(' ');

numberList.sort((a,b) => a - b)
// console.log({numberList})

let i = 0;
while(i < Number(input[0])){
    let done = false;
    for (a = 0; a < Number(input[0]) - 1; a++) {
        if(done) break;
        for (b = 0; b < Number(input[0]) - 1; b++) {
            if((a === i) || b === i) {
                continue;
            }
            if (Number(numberList[a]) + Number(numberList[b]) === Number(numberList[i])){
                answer += 1;
                done = true;
                break;
            }
        }
    }
    i++;
}

console.log(answer)