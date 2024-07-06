N = int(input())

S = []
C = []
for _ in range(N):
  s, c = input().split()
  c = int(c)
  S.append(s)
  C.append(c)
total = sum(C)
S.sort()
index = total % N
print(S[index])