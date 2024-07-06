N, T = map(int,input().split())
A = list(map(int,input().split()))

cross1 = set()
cross2 = set()

for i in range(N):
  cross1.add(1 + (N+1)*i)
  cross2.add(N + (N-1)*i)

exit_flag = 0

a = set()

for i in range(T):
  a.add(A[i])
  for j in range(1, N+1):
    vertical_set = {j + N * k for k in range(N)}
    horizontal_set = {(j-1)*N + k for k in range(1,N+1)}
    if vertical_set.issubset(a) or horizontal_set.issubset(a):
      exit_flag = 1
      break
    
  if cross1.issubset(a) or cross2.issubset(a):
    exit_flag = 1
  
  if exit_flag == 1:
    print(i+1)
    break


if exit_flag == 0:
  print(-1)