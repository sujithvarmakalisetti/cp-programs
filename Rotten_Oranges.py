

from collections import deque

n,m=map(int,input().split())


l=[]




for _ in range(n):
    l.append(list(map(int,input(). split())))

visited=[[False]*m for _ in range(m)]



   
q=deque()   
for i in range(n):
    for j in range(m):
        if(l[i][j]==2):
            q.append((i,j))
            visited[i][j]=True

time=0

directions=[(-1,0),(1,0),(0,-1),(0,1)]



while(q):
    s=len(q)
    for _ in range(s):
        
        i,j=q.popleft()
        
        for di,dj in directions:
            
            ni=di+i
            nj=dj+j
            
            if(0<=ni<n and 0<=nj<m and l[ni][nj]==1 and not visited[ni][nj]):
                
                l[ni][nj]=2
                
                q.append((ni,nj))
                
                visited[ni][nj]=True
                
    if q:
        time+=1
flag=True

for i in range(n):
    for j in range(m):
        if(l[i][j]==1):
            flag=False
if(flag):
    print(time)
else:
    print(-1)
        
    
    
    
        
        

