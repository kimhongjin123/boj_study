t=int(input())
def repeat():
    answer=list(str(bin(n)[2:]))
    answer.reverse()
    for i,val  in enumerate(answer):
        if(int(val)==1):
            print(i,end=" ")
    print()
for j in range(t):
    n=int(input())
    repeat()