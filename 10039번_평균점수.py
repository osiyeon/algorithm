
score = []
for i in range(5):
    scores = int(input())
    score.append(scores)

for i in range(5):
    if score[i] < 40:
        score[i] = 40

print("%d" % (sum(score)/len(score)))