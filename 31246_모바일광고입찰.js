const fs = require('fs');
const input = fs.readFileSync(0).toString().trim().split('\n')

const [ N, K ] = input[0].split(' ')

const ABList = input.splice(1, N)


const XList = ABList.map(item => {
    let [a, b] = item.split(' ');
    return Math.max(Number(b) - Number(a), 0);
})

const XListSort = XList.sort((a,b) => a - b)


const X = XListSort[Number(K)-1]
console.log(X)