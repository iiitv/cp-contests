t=int(input())
for i in range(0,t):
    n=input()
    (n1,n2)=n.split()
    n1=[int(i) for i in n1]
    n2=[int(i) for i in n2]
    n1.reverse()
    n2.reverse()
    n1len=len(n1)
    c=0
    carry=0
    car=""
    for y in n2:
        carry=0
        i=0
        for x in n1:
            z=x*y+carry
            carry=int(z/10)
            if carry>0 and i!=n1len-1:
                c+=1
                car=car+str(carry)  
            i+=1
    print("{} {}".format(c,car))