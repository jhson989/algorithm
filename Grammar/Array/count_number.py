import sys
A = int(sys.stdin.readline())
B = int(sys.stdin.readline())
C = int(sys.stdin.readline())
count = [0 for _ in range(10)]
for e in str(A*B*C):
    count[int(e)]+=1
for e in count:
    print(e)