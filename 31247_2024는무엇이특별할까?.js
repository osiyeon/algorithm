const fs = require('fs');
const input = fs.readFileSync(0).toString().trim().split('\n')

let output = ''

const getBaseLog = (x, y) => {
    return Math.log(y) / Math.log(x) // logxy
}

for (i = 1; i <= Number(input[0]); i++) {
    const [N, K] = input[i].split(' ')
    
    let answer = 0;
    
    if( Number(K) === 0) {
        answer = 1
        output += answer + '\n'
        continue;
    }

    const x = getBaseLog(2, Number(N)) / Number(K)
    answer = Math.floor(x)
    output += answer + '\n'

}
console.log(output)

/*1
// map 사용해서
const testCaseList = input.splice(1, input.length)



testCaseList.map((item) => {
    const [N,K] = item.split(' ');
    let answer = 0;
    if(Number(N) === 0 || Number(N) === 1) {
        answer = 1
        console.log(answer)
        return
    }

    const x = getBaseLog(2, Number(N)) / Number(K)
    // answer = getKfunction(Number(N), Number(K))
    // console.log("----x: ", x)
    answer = Math.floor(x)
    console.log(answer)
})
*/