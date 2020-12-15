import sys
num = []
for _ in range(9):
    num.append( int(sys.stdin.readline()) )

idx, MAX =  max( enumerate(num), key=(lambda e: e[1]) )
print("%d\n%d" % (MAX, idx+1))