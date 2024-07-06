import itertools

def print_carpet(carpet):
    for row in carpet:
        print(' '.join(row))

def generate_carpet(N):
    base_carpet = [[['#'], ['#'], ['#']], [['#'], ['.'], ['#']], [['#'], ['#'], ['#']]]

    carpets = [base_carpet]

    for i in range(1, N):
        prev_carpets = carpets[-1]
        new_carpet = [
            [prev_carpets, prev_carpets, prev_carpets],
            [prev_carpets, [['.'] * 3 for _ in range(3)], prev_carpets],
            [prev_carpets, prev_carpets, prev_carpets]
        ]
        carpets.append(new_carpet)

    return carpets[-1]

N = int(input())

final_carpet = generate_carpet(N)
for i in range(N+2):
    final_carpet = list(itertools.chain.from_iterable(final_carpet))

i = 0
j = 0
while j < 3 ** N:
    print(*final_carpet[i:3 ** N+1])
    i += 3 ** N
    j += 1
        

# Flatten the final carpet
# flattened_carpet = flatten_carpet(final_carpet)

# Print the final carpet
# print_carpet(flattened_carpet) 
