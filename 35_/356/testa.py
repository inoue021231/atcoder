N, L, R = map(int, input().split())

array = [i+1 for i in range(N)]

diff_array = array[L-1:R]

diff_array.sort(reverse=True)

array[L-1:R] = diff_array

print(*array)
