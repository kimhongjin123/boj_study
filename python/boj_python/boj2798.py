card_count,card_max=map(int,input().split())
card_list=list(map(int,input().split()))

def black_jeck(card_list,card_max):
    answer=[0,0]
    count=0
    for first_num in card_list:
        for second_num in card_list:
            for third_num in card_list:
                num=list(set([first_num,second_num,third_num]))
                if len(num)==3:
                    count=sum(num)
                if card_max>=count:
                    answer[0]=count
                    answer[1]=max(answer)
                count=0
    return answer[1]

count=black_jeck(card_list,card_max)
print(count)
   