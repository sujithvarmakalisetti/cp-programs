
def f(i,j,text,pattern):
    if(i<0 and j<0):
        return True
    if(j<0 and i>=0):
        return False
    if(i<0 and j>=0):
        for k in range(j + 1):
            if pattern[k] != '*':
                return False
                        
        return True
    
    if(text[i]==pattern[j] or pattern[j]=='?'):
        return f(i-1,j-1,text,pattern)
    if(pattern[j]=='*'):
        return f(i-1,j,text,pattern) or f(i,j-1,text,pattern)
    return False

s=input().strip()
p=input().strip()
result=f(len(s)-1,len(p)-1,s,p)
if(result):
    print(1)
else:
    print(0)
