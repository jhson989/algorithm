A = int(input())
B = input()

for e in range(len(B)-1, -1, -1):
    print(A*int(B[e]))
print(A*int(B))