from operator import le


number=input("숫자를 입력하세요:")
total=0
for i in range(len(number)):
    if(int(number[i])%2==1):
        total+=1
        

print("홀수의 갯수:{0}".format(total))