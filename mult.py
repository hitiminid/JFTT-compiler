a = 10
b = 5

c = 0

while b > 0:
    if b % 2 == 1:  # JODD
        c += a
    b = b/2
    a = a*2

print(c)
