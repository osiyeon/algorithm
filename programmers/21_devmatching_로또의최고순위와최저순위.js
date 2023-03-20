function solution(lottos, win_nums) {
  var answer = []

  const missingNums = lottos.filter(item => item === 0).length

  const sameNums = win_nums.filter(j => {
    const sameNum = lottos.filter(i => j === i)
    return sameNum[0]
  }).length

  answer.push(sameNums + missingNums)
  answer.push(sameNums)

  answer = answer.map(item => {
    switch (item) {
      case 6:
        return 1
      case 5:
        return 2
      case 4:
        return 3
      case 3:
        return 4
      case 2:
        return 5
      default:
        return 6
    }
  })

  return answer
}
