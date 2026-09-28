



target, a = map(int, input().split())


numbers = list(map(int, input().split()))

m=max(numbers)

li=[[0 for _ in range(target+1)] for _ in range(m+1)]

li[0][0]=1

numbers.sort()

ele=[0]
for x in numbers:
    ele.append(x)

for i in range(1,len(ele)):
    for j in range(target+1):
        if(ele[i]>j):
            li[ele[i]][j]=li[ele[i-1]][j]
        else:
            index=j-ele[i]
            li[ele[i]][j]=li[ele[i]][index]+li[ele[i-1]][j]

l=len(ele)

print(li[ele[l-1]][target])
