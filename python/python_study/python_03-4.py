#간단한 영어 단어 퀴즈 만들기
import re


ans1=input("'사자'의 영어단어는 무엇일까요?")
result="틀렸습니다."
if ans1=="lion":
    result="맞았습니다."
    
print("입력 :{0} \n 결과 :{1}".format(ans1,result))