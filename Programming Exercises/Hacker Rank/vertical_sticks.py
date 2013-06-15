import sys
import itertools

def vertical_sticks(permutations):
    num_permutations = len(permutations)
    count = 0
    
    for p in permutations:
    
    return count / num_permutations

T = int(sys.stdin.readline())

for num_cases in xrange(0, T):
    N = int(sys.stdin.readline())
    y = sys.stdin.readline()
    y = [i for i in y if i.strip()]
    permutations = list(itertools.permutations(y))
    print vertical_sticks(permutations)