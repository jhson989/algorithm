import sys
N, X = map(int, sys.stdin.readline().split())
array = sys.stdin.readline().split()
array = [ int(e) for e in array ]

for e in array:
    if (e<X):
        print(e, end=" ")


'''
10 5
1 10 4 9 2 3 8 5 7 6
예제 출력 1 
1 4 2 3
'''