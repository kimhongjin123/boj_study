import math
print('-'*40)
print(" cm  mm  m   inch")
print('-'*40)
a=[1,10,0.01,0.3937]
for i in range(1,101):
    for j in range(0,4):
        print(round(i*a[j],1)," ", end=" ")
        if j==3:
            print('\n')
print('-'*40)