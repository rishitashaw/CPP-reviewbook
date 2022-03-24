from collections import defaultdict
import itertools

test = int(input())
for i in range(test):
    def solve(array):
        n = int(input())
        m = int(input())

        print(list(itertools.permutations(array)))

    for j in range(n):
        array[j] = list(map(int, input().split()))

    k = 7
    print(solve(arr, k))
