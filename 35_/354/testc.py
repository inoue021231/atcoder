N = int(input())

A = []
C = []
for _ in range(N):
  a, c = map(int, input().split())
  A.append(a)
  C.append(c)

answer = []
for i in range(N):
  flag = 0
  for j in range(i+1,N):
    if A[i] < A[j] and C[i] > C[j]:
      flag = 1
      break
  if flag == 1:
    continue
  answer.append(i+1)

print(len(answer))
print(*answer)