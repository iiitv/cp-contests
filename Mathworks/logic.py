t=int(input())
while t>0:
    n=int(input())
    if n%2==0 and n%5==0 and n%7==0 and n%9==0:
        print("YES")
    else:
        print("NO")
        t=t-1
