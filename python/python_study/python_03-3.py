
#3또는 4의 배수 판별하기
num=int(input("양의 정수를 입력하세요 :"))
result="3의 배수도 아니고 4의 배수도 아니다."

if num%3==0 and num%4!=0:
    print("3의 배수 입니다.")

elif num%4==0 and num%3!=0:
    print("4의 배수 입니다.")
elif num%4==0 and num%3==0:
    print("4의 배수이고 3의 배수입니다.")
else:
    print(result)
    