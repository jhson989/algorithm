a, b, c = input().split()
A, B, C = int(a), int(b), int(c)

print((A+B)%C)
print(((A%C) + (B%C))%C)
print((A*B)%C)
print(((A%C) * (B%C))%C)