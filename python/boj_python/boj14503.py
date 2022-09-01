
row,col =input().split()
x,y,dir=map(int,input().split())
arr=[list(map(int,input().split())) for _ in range(int(row))]
arr[x][y]=2
count=1
static_count=0
end=False
def clean_move(x,y,dir):  
    dir_move=[-1,1,1,-1] #북.동.남.서 위치에 따른 좌표 움직임
    movement=False
    for i in range(4):
        if dir==0:
            dir=4
        if dir%2==0:
            if arr[x][y+dir_move[dir-1]]==0:
                y=y+dir_move[dir-1]
                dir=dir-1
                movement=True
                return x,y,dir,arr,movement
            else:
                dir=dir-1
                return x,y,dir,arr,movement
        else:
            if arr[x+dir_move[dir-1]][y]==0:
                x=x+dir_move[dir-1]
                dir=dir-1
                movement=True
                return x,y,dir,arr,movement 
            else:
                dir=dir-1
                return x,y,dir,arr,movement
def back(x,y,dir,static_count): #후진함수
    end=False
    dir_back=[1,-1,-1,1] #후진하는 경우의 수, 북,동,남,서
    for b in range(4):
        if dir%2==0:
            if arr[x+dir_back[dir]][y]!=1:
                x=x+dir_back[dir]
                return x,y,end 
            else:
                end=True
                return x,y,end
                
        else:
            if arr[x][y+dir_back[dir]]!=1:
                y=y+dir_back[dir]
                return x,y,end
            else:
                end=True
                return x,y,end
                
while True:
    x,y,dir,arr,movement=clean_move(x,y,dir)
    arr[x][y]=2
    if movement==False:
        static_count+=1
    else:
        count+=1
        static_count=0
    if static_count==4:  
        x,y,end=back(x,y,dir,static_count)
        arr[x][y]=2
    if static_count>=4:
        static_count=0
    if end==True:
        break
print(count)  