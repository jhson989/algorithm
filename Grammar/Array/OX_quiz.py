import sys
T = int(sys.stdin.readline())

for _ in range(T):
    seq = sys.stdin.readline()[:-1]

    num = 0
    local = 0
    for s in seq:
        if s == 'O':
            local+=1
            num += local
        else:
            local = 0
    print(num)