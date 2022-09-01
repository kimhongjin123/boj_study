arrA,arrB=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
arr3=arr1+arr2
"""for i in range(len(arr3)):
    for j in range(1,len(arr3)-i):
        if arr3[j-1]>=arr3[j]:
            temp=arr3[j-1]
            arr3[j-1]=arr3[j]
            arr3[j]=temp"""
arr3.sort()
for a in arr3:
    print(a,end=' ')