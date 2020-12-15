import sys

TS = int(sys.stdin.readline())

for _ in range(TS):
    p = sys.stdin.readline().rstrip()
    n = int(sys.stdin.readline())
    num = sys.stdin.readline().rstrip()[1:-1]
    if n > 0:
        num = [int(x) for x in num.split(",")]
    
    if n < p.count('D'):
        print("error")
    elif n == p.count('D'):
        print("[]")
    else:
        if n == 0:
            print("[]")

        else: 
            backward = True
            From = 0
            to = 0

            for word in p:
                if word == "R":
                    backward = not backward
                if word == "D":
                    if backward == True:
                        From += 1
                    else:
                        to -= 1

            out = "["
            if backward == True:
                for i in range(From, len(num)+to, 1):
                    out += "%d," % num[i]
            else :    
                for i in range(len(num)-1+to, From-1, -1):
                    out += "%d," % num[i]
            out = out[:-1] + "]"

            print(out)

        
