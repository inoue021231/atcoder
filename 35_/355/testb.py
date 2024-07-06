N, M = map(int,input().split())

dic = []

A = list(map(int, input().split()))
B = list(map(int, input().split()))

for a in A:
  dic.append({"A":a})

for b in B:
  dic.append({"B":b})

sorted_dic = sorted(dic, key=lambda x: list(x.values())[0])


prev_key = list(sorted_dic[0].keys())[0]
exit_flag = 0
for i in range(1,N+M):
  current_key = list(sorted_dic[i].keys())[0]
  if prev_key == current_key and current_key == 'A':
    print("Yes")
    exit_flag = 1
    break
  prev_key =  current_key

if exit_flag == 1:
  exit()

print("No")