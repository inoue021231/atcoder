H = int(input())

i = 0
total = 0
while True:
  if H < total + 2 ** i:
    break
  total += 2 ** i
  i += 1
print(i+1)