count=0
step_count=0
row,line= map(int,input().split())
high=list(map(int,input().split()))
matrix=[[0]*line for _ in  range(row)]
for i in range(len(high)):
    for j in range(high[i]):
        matrix[j][i]=1   
for i in range(row):
    onoff=False
    step_count=0
    for j in range(line):
        if matrix[i][j]==1 and onoff==True:
            count+=step_count
            step_count=0
            onoff=False
        if matrix[i][j]==1 and onoff==False:
            onoff=True
        elif matrix[i][j]==0 and onoff==True:
            step_count+=1           
print(count)