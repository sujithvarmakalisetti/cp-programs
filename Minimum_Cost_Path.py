

n,m=map(int,input().split())

grid=[]

for _ in range(n):
    grid.append(list(map(int,input().split())))

for i in range(1,m):
    grid[0][i]+=grid[0][i-1]

for i in range(1,n):
    grid[i][0]+=grid[i-1][0]
    
for i in range(1,n):
    for j in range(1,m):
        grid[i][j]+=min(grid[i-1][j-1],grid[i][j-1],grid[i-1][j])
    
print(grid[n-1][m-1])
