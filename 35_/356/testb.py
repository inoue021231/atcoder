N, M = map(int, input().split())

a = list(map(int, input().split()))

for i in range(N):
  x = list(map(int,input().split()))
  for j in range(M):
    a[j] -= x[j]

if all([a[i] <= 0 for i in range(M)]):
  print("Yes")
else:
  print("No")