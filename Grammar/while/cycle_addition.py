N = input()

if int(N) < 10:
    N = "0" + N


target = N
num = 0
while True:
    N = N[1] + str((int(N[0]) + int(N[1]))%10)
    num+=1
    if int(N) == int(target):
        break

print(num)