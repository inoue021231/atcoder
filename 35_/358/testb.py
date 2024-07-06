N, A = map(int, input().split())

t = list(map(int, input().split()))

wait_time_list = [t[0] + A]
print(wait_time_list[0])
for i in range(1, N):
  if wait_time_list[i-1] < t[i]:
    wait_time_list.append(t[i] + A)
  else:
    wait_time_list.append(wait_time_list[i-1] + A)
  print(wait_time_list[i])
