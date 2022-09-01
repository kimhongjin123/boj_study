stack=[]
dir=[[-1,0],[1,0],[0,-1],[0,1]]
repeat=int(input())
def cabbage():
    count=0
    row,line,num=map(int,input().split())
    matrix=[[0]*row for _ in range(line)] 
    for i in range(num):
        y,x=map(int,input().split())
        matrix[x][y]=1

    for i in range(line):
        for j in range(row):
            if matrix[i][j]==1:
                stack.append([i,j])
                count+=1
                while stack:
                    back=stack[-1]
                    matrix[back[0]][back[1]]=0
                    stack.pop()
                    for k in range(len(dir)):  
                        next_x=back[0]+dir[k][0]
                        next_y=back[1]+dir[k][1]
                        if next_x>=0 and next_x<line and next_y>=0 and next_y<row:
                            if matrix[next_x][next_y]==1:
                                stack.append([next_x,next_y])
                                matrix[next_x][next_y]=0
                
    print(count)                     
if __name__ == "__main__":
    for _ in range(repeat):
        cabbage()
