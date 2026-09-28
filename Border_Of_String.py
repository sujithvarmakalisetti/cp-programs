

s=input()
li=[]

for i in range(len(s)-1):
    li.append(s[0:i+1])
p=""
for j in range(len(s)-1,0,-1):
    if s[j:len(s)] in li:
        if(len(p)<len(s[j:len(s)])):
            p=s[j:len(s)]
print(p)
