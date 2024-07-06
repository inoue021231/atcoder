from collections import deque

N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
B.sort()

A = deque(A)

ans = 0

for i in range(M):
    while True:
        if len(A) == 0:
            print(-1)
            exit()
        if A[0] >= B[i]:
            ans += A.popleft()
            break
        else:
            A.popleft()

print(ans)