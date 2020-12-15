import sys
C = int(sys.stdin.readline())

for _ in range(C):
    num, *L = [int(e) for e in sys.stdin.readline().split()]
    avg = sum(L)/len(L)
    chk = [1 if e>avg else 0 for e in L]
    print( "%.3f" % (100.0*sum(chk)/len(chk)) + "%" )