pits_count = int(input())
pits = [int(item) for item in input().split()]
# print(pits)


day_count = 0
day_count += pits[0]

#if the depth of pit in the next collum is greater than the current one, add the difference between the two depths
for num in range(len(pits)-1):
    if pits[num+1] > pits[num]:
        day_count += (pits[num+1] - pits[num])
    # print(num)

print(day_count)
