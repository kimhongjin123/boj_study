
row,col =input().split()   
arr=[list(input()) for _ in range(int(row))]
type_a=list('BWBWBWBW')
type_b=list('WBWBWBWB')
answerB=[]
answerW=[]
minBW=0
answer=10000000000000000000000
for i in range(8):
    if i%2==0:
        answerB.append(type_a)
        answerW.append(type_b)
    else:
        answerB.append(type_b)
        answerW.append(type_a)
for i in range(int(row)-7):
    for j in range(int(col)-7):
        countB=0
        countW=0
        for a in range(8):
            for b in range(8):
                if answerB[a][b]!=arr[a+i][b+j]:
                    countB+=1
                elif answerW[a][b]!=arr[a+i][b+j]:
                    countW+=1
                minBW=min(countB,countW)
        answer=min(minBW,answer)         
print(answer)