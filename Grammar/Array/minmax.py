import sys
_ = input()
num = sys.stdin.readline().split()
num = [int(e) for e in num]
print("%d %d" % (min(num), max(num)))
