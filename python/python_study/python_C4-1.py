a=[]
for i in range(201,801):
    if i%5!=0 and len(a)!=10:
        print(i,end=" ")
        a.append(i)
        if len(a)==10:
            print(i)
            a.clear()

        