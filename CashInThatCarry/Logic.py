t=int(input())
for i in range(0,t):
    n=input()
    (n1,n2)=n.split()
    n1=[int(i) for i in n1]
    n2=[int(i) for i in n2]
    n1.reverse()
    n2.reverse()
    c=0
    carry=0
    car=""
    for y in n2:
        carry=0
        for x in n1:
            z=x*y+carry
            carry=int(z/10)
            if carry>0:
                c+=1
                car=car+str(carry)   
    
    print("{} {}\n".format(c,car),end="")
