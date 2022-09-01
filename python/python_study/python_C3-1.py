
a=int(input("시작수는 :"))
b=int(input("끝 수는 :"))
c=int(input("정수를 입력하세요.:"))
reult="%d는 %d~%d 사이에 없다."%(c,a,b)
if c>=a and c<=b:
    reult="%d는 %d~%d 사이에 있다."%(c,a,b)

print(reult)