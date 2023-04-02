const rows = 6
const colums = 6
const queries = [
  [2, 2, 5, 4],
  [3, 3, 6, 6],
  [5, 1, 6, 3],
]

function solution(rows, columns, queries) {
  var answer = []

  // 1. table 그리기
  let tables = {}
  for (i = 1; i < rows + 1; i++) {
    tables[i] = Array.from(
      { length: columns },
      (_, j) => (i - 1) * columns + j + 1
    )
  }

  queries.forEach(query => {
    // 2. 꼭짓점 설정
    const vertex = [
      [query[0], query[1]],
      [query[0], query[3]],
      [query[2], query[1]],
      [query[2], query[3]],
    ]

    // 3. 첫번째 꼭짓점 기록
    // 4. 회전
    const movedNums = []
    // 4-1. 왼쪽 위로 이동
    const x = tables[vertex[0][0]][vertex[0][1] - 1]
    movedNums.push(x)
    for (i = vertex[0][0] + 1; i < vertex[2][0]; i++) {
      const movingNum = tables[i][vertex[0][1] - 1]
      tables[i - 1][vertex[0][1] - 1] = movingNum
      movedNums.push(movingNum)
    }
    // 4-2. 아래쪽 옆으로 이동
    tables[vertex[2][0] - 1][vertex[2][1] - 1] =
      tables[vertex[2][0]][vertex[2][1] - 1]
    movedNums.push(tables[vertex[2][0]][vertex[2][1] - 1])
    for (i = vertex[2][1] + 1; i < vertex[3][1] + 1; i++) {
      const movingNum = tables[vertex[2][0]][i - 1]
      tables[vertex[2][0]][i - 2] = movingNum
      movedNums.push(movingNum)
    }
    // 4-3. 오른쪽 아래로 이동
    for (i = vertex[3][0] - 1; i >= vertex[1][0]; i--) {
      const movingNum = tables[i][vertex[3][1] - 1]
      tables[i + 1][vertex[3][1] - 1] = movingNum
      movedNums.push(movingNum)
    }
    // 4-4. 위쪽 옆으로 이동
    for (i = vertex[1][1] - 1; i > vertex[0][1]; i--) {
      const movingNum = tables[vertex[1][0]][i - 1]
      tables[vertex[1][0]][i - 1] = movingNum
      movedNums.push(movingNum)
    }

    answer.push(Math.min(...movedNums))
  })

  return answer
}

solution(rows, colums, queries)
