import sys

count = [0 for _ in range(42)]
for _ in range(10):
    count[int(sys.stdin.readline())%42]+=1

print(42-count.count(0))