S = list(input())

big_count = 0
small_count = 0

for i in range(len(S)):
  if ord(S[i]) >= 97:
    small_count += 1
  else:
    big_count += 1

ans = ''

if big_count > small_count:
  for i in range(len(S)):
    if ord(S[i]) >= 97:
      ans += chr(ord(S[i]) - 32)
    else:
      ans += S[i]
else:
  for i in range(len(S)):
    if ord(S[i]) >= 97:
      ans += S[i]
    else:
      ans += chr(ord(S[i]) + 32)

print(ans)