num=input()
tree=list(map(int,input().split()))
max_time=0
tree.sort()
for i in range(len(tree)-1,-1,-1):
    if max_time<tree[i]+len(tree)-i:
        max_time=tree[i]+len(tree)-i
print(max_time+1)
