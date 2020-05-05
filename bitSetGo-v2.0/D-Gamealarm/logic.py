
for j in range(int(input())):
    n1,n2=(input().split(","))
    n1=int(n1)
    n2=int(n2)
    if(n1==9):
        n1=0

    k=n2//9
    r=n2%9
    for i in range(n2,n2-r,-1):
	    rr=i%9
	    if(rr==n1):
	        k=k+1


    print(k)