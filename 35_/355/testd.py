N = int(input())

lr = []
for _ in range(N):
  lr.append(list(map(int,input().split())))
max_value = max(a[1] for a in lr)

answer = [0] * max_value

for i in range(N):
  n = lr[i][0]-1
  m = lr[i][1]-1
  answer[n:m+1] = [x + 1 for x in answer[n:m+1]]


print(max(answer))