def createStack():
    stack = []
    return stack

def isEmpty(stack):
    return len(stack)==0

def push(stack,x):
    stack.append(x)


def pop(stack):
    if isEmpty(stack):
        #print("Error underflow")
    else:
        return stack.pop()

def printNSE(arr):
    s = createStack()
    dict={}
    element = 0
    next = 0

    push(s,arr[0])

    for i in range(1,len(arr),1):
        next = arr[i];

        if isEmpty(s) == False:
            element = pop(s)
            while element > next:
                dict[element] = next
                #print(str(element)+" ---> "+str(next),end=" ")
                if isEmpty(s) == True:
                    break
                element = pop(s)

            if element < next:
                push(s,element)
        push(s,next)

    while isEmpty(s) == False:
        element = pop(s)
        next = -1
        dict[element] = -1
        #print(str(element)+" ---> "+str(next),end=" ")

    for i in range(n):
        print(str(dict[arr[i]]), end=" ")
    print("")

t = int(input())

for i in range(t):
    list = []
    n = int(input())
    for i in range(n):
        list.append(int(input()))

    printNSE(list);
