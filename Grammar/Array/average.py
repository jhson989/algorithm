import sys
N = int(sys.stdin.readline())
num = [int(e) for e in sys.stdin.readline().split()]
num = [100*e/max(num) for e in num]
print("%f" % (sum(num)/len(num)))