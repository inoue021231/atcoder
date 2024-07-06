import itertools

N, M = map(int, input().split())
s = []

min = N

for i in range(N):
  ss = list(input())
  s.append(ss)

for i in range(1,N+1):
  l = list(itertools.combinations(s,i))
  new_list = [list(item) for item in l]
  break_flag = 0
  for j in range(len(new_list)):
    stack = new_list[j][0].copy()
    if 'x' not in stack:
      break_flag = 1
      print(i)
      break
    for k in range(1,len(new_list[j])):
      for l in range(M):
        if new_list[j][k][l] == 'o' or stack[l] == 'o':
          stack[l] = 'o'
      
      if 'x' not in stack:
        break_flag = 1
        print(i)
        break
    if break_flag == 1:
      break
  if break_flag == 1:
    break