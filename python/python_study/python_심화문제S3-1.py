a=input("등급을 입력해주세요 :")
alist=['A+','A','B+','B','C+','C','D+','D','F']
blist=[4.5,4.0,3.5,3.0,2.5,2.0,1.5,1.0,0]
result=0

for i in range(9):
    if a == alist[i]:
        result=blist[i]

print("평점: ",result)