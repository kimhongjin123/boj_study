number=int(input())
decimal=list(map(int,input().split()))
count=0
for i in decimal:
    decimal_ox=0
    for k in range(1,i+1):
        if i%k==0:
            decimal_ox+=1
    if decimal_ox==2:
        count+=1
print(count)