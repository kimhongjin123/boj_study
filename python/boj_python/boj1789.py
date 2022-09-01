num=int(input())
i=0
while True:  
    i+=1
    num=num-i
    if num<0:
        break
    #print(i,num,sep=",")
print(i-1)