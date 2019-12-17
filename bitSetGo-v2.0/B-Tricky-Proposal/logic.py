n = 1;
t = int(input());

for i in range(t):
    x = int(input());
    
    while x >= ((n+1)*(n+2)/2):
        print(n,end=" ")
        n = n+1

    print(int(x-(n*(n-1))/2))
    n = 1;
