n=int(input())
for i in range(0,n):
    wlen=int(input())
    s=input()
    t=float(input())
    words=s.split()
    time=0.0
    wordss=set(words)
    wordss=list(wordss)
    left=['q','w','e','r','t']
    right=['y','u','i','o','p']
    tl=0.2
    tr=0.1
    a=[0 for word in wordss]
    b=[0.0 for word in wordss]
    for word in words:
        letters = list(word)
        L=0
        R=0
        tim=0
        index=wordss.index(word)
        if a[index] == 0:
            for let in letters:
                if let in left:
                    tim=tim+tl*(2**L)
                    L+=1
                    R=0
                elif let in right:
                    tim=tim+tr*(2**R)
                    R+=1
                    L=0
            a[index]+=1
            b[index]=tim
        else:
            tim=b[index]/2
        time=time+tim+0.3
    time-=0.3
    time=round(time,1)
    if time<t:
        print("WORK HARDER, {}".format(time))
    elif time==t:
        print("GOOD, {}".format(time))
    else:
        print("GREAT JOB, {}".format(time))


    
