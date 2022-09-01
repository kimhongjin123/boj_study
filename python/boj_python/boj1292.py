A,B=map(int,input().split())
list=[]
def repeat(num):
    for i in range(1,num+1):
        list.extend([i for _ in range(i)])
repeat(B)
answer=list[A-1:B]
print(sum(answer))
