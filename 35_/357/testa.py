N, M = map(int, input().split())
H = list(map(int, input().split()))

m = M
i = 0
while m > 0 and i < N:
  m -= H[i]
  if m < 0:
    break
  i += 1

print(i)