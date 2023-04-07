n = int(input())
m = int(input())
if m > n: # если N окажется числом меньшим M с -
    for i in range(m-n):
        k = int(input())
        if ( k <= m ) and ( k >= n ):
            print(k)
else:
    for i in range(n-m):
        for i in range(m-n):
            k = int(input())
            if ( k >= m ) and ( k <= n ):
                print(k)
