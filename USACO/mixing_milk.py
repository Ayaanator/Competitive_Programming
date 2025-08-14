c1, m1 = map(int, input("Enter two integers: ").split())
c2, m2 = map(int, input("Enter two integers: ").split())
c3, m3 = map(int, input("Enter two integers: ").split())

pairs = []
pairs.append([c1, m1])
pairs.append([c2, m2])
pairs.append([c3, m3])

for i in range(100):
    added_milk = pairs[(i + 1) % 3][1] + pairs[i % 3][1]
    if (added_milk > pairs[(i + 1) % 3][0]):
        pairs[(i + 1) % 3][1] = pairs[(i + 1) % 3][0]
        pairs[i % 3][1] -= (pairs[(i + 1) % 3][0] - pairs[(i + 1) % 3][1])
    else:
        pairs[(i + 1) % 3][1] = added_milk

print(pairs[0][1])
print(pairs[1][1])
print(pairs[2][1])