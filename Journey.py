k = int(input())
for _ in range(k):
    n,a,b,c = map(int,input().split())
    cycle = [a,b,c]
    cycle_sum = sum(cycle)
    full_cycles = (n//cycle_sum)*3
    total = (n//cycle_sum)*cycle_sum

    day= full_cycles

    if total>=n:
        print(day)
        continue

    for d in cycle:
        total += d
        day += 1
        if total>=n:
            print(day)
            break

