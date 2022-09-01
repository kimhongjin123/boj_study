import imp


import math
a=float(input("반지름은 ?"))
print("반지름: ",a,sep="")
print("원의 둘레 :"+str(a*2*math.pi))
print("원의 면적:%.2f"%(a**2*math.pi))

