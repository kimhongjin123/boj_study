from distutils.core import run_setup


a=int(input("월을 숫자로 입력하세요"))

result=""
if a>=3 and a<=5:
    result="봄"
elif a>=6 and a<=8:
    result="여름"
elif a>=9 and a<=11:
    result="가을"
else:
    result="겨울"

print("%d월은 {}입니다.".format(result)%a)    