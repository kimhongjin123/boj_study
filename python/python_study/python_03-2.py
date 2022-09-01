age=int(input("나이는 몇살인가요? :"))
ticket=2000 #기본입장료
if age >=65:
    print("나이는"+str(age)+"살 입니다.")
    print("입장료는 무료입니다.")
else :
    print("나이는 %d살 입니다."%age)
    print("입장료는 {0} 입니다.".format(ticket))