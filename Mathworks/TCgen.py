'''
        Aashutosh Rathi
https://github.com/aashutoshrathi/
Testcase Generator for HackerRank

'''

import os
import random
import sys
import zipfile
import math
import time
import shutil

try:
    os.mkdir('input')
    os.mkdir('output')
except OSError:
    pass

pwr = math.pow
rint = random.randint

choice = int(input("Enter your choice of language\n1 for C\n2 for C++\n3 for Java\n4 for Python\n"))
if choice != 1 and choice != 2 and choice != 3 and choice != 4:
    print("Wrong choice entered!")
    exit()

tf = 10  # number of test files, change it according to you.

for i in range(0, tf + 1):
    print('Generating:', i, file=sys.stderr)
    sys.stdout = open('input/input%02d.txt' % i, 'w')

    '''
    Input area will start here,
    everything that you print out here will be taken as input in your logic file.
    You can set difficulty of test cases all by you.
    '''
    # Input File Printing Starts
    x = rint(1,1000)  # number of test cases in (1,100)
    # Prints x into input file
    print(x)
    for z in range(x):
        a=0
        q=rint(1,10)
        if q==5 or q==7:
            a=rint(1,10000000000000000000000000000000000000000000000000000000000000000000000)*2*3*5*7*9
        else:
            a=rint(1,10000000000000000000000000000000000000000000000000000000000000000000000)
        
        print(a)
    sys.stdout.close()
    # Input File Printing Ends


with zipfile.ZipFile('test-cases.zip', 'w', zipfile.ZIP_DEFLATED) as zf:
    for i in range(0, tf + 1):
        print('Zipping:', i, file=sys.stderr)
        start = time.time()

        if choice == 1:  # Choice of language is C
            os.system('gcc Question1.c -o Question1')  # System call to compile .c file
            # System call to generate output files for C
            os.system('./logic < input/input%02d.txt > output/output%02d.txt' % (i, i))
        elif choice == 2:  # Choice of language is C++
            os.system('g++ -o logic logic.cpp')  # System call to compile .cpp file
            # System call to generate output files for C++
            os.system('./logic < input/input%02d.txt > output/output%02d.txt' % (i, i))
        elif choice == 3:  # Choice of language is Java
            os.system('javac Logic_java_1.java')  # System call to compile .java file
            # System call to generate output files for Java
            os.system('java Logic_java_1 < input/input%02d.txt > output/output%02d.txt' % (i, i))
        elif choice == 4:  # Choice of language is Python
            # System call to generate output files for Python
            os.system('python Logic.py < input/input%02d.txt > output/output%02d.txt' % (i, i))

        end = time.time()
        print('Time taken to execute this TC %02f' % (end - start), file=sys.stderr)

        zf.write('input/input%02d.txt' % i)
        zf.write('output/output%02d.txt' % i)

shutil.rmtree('input')
shutil.rmtree('output')
