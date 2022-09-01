number=int(input())
row=[0,1]
count=1
#2번째 과거 1번째 과거
def fibonacci():
    global count
    if number==1:
        return
    new=sum(row)
    row[0]=row[1]
    row[1]=new
    count+=1
    if number==count:
        return 
    fibonacci()
    
fibonacci()
print(row[1])

#for문을 사용한 예제
"""n = int(input())

a, b = 0, 1

for i in range(n):
  a, b = b, a + b

print(a)"""