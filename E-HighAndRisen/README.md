# E - High and Risen

## Problem Statement

Kids studying in Tritvi School are very happy because they are finally getting their own High Rise Hostel and you, are appointed as the chief architect.

Jaya Nathu, the Hostel Incharge says that the hostel has to be divided into **not more than $4$ blocks**, named after English alphabets, starting from $A$ and moving on from the first block to the last block. To do this, Jaya chooses a random number between $16$ and $2000$ (both inclusive) and you subtract the number of non-zero alphanumeric characters in the hexadecimal representation of the highest power of $16$ that is not greater than the chosen number, from the exponent of the highest power of $4$ equal to or just less than the chosen number to get the number of blocks.

After the number of construction of the different blocks and with the kids living in them, there arises another problem.

Initially, all the kids of the school are living in Block $A$. **No two kids are of the same age** and only one kid lives on one floor. Also, it is a rule of the hostel that **no kid lives on a floor below which a kid of a smaller age is living** and there is never a floor unoccupied between two occupied floors at any time.

Waisjal Caterers want all the kids to shift to the last block so that it is easier to serve food to them. But Jaya has applied another rule. Only one kid can shift to another block in one hour and **only the kid on the topmost floor can shift at a time**.

So, if there are $4$ blocks and $5$ kids are in Block $B$ at some time during shifting, then only the topmost kid can move to the lowest unoccupied floor of either Block $A$ or Block $C$ or Block $D$. Also, it should be ensured that all the previous applied rules are not broken at any point during the shifting. 

If the number of kids, $n$ is known to the hostel authorities, then help Jaya to find the minimum number of hours for the whole shifting process to complete to the last so that the kids are in the **same order as they were in Block $A$ initially**, according to the output format given below.

Check the sample test cases below to get a better understanding.


## Input Format

- The first line contains an integer $T$, denoting the number of test cases.
- Each of the subsequent $T$ lines contains two inputs - the number $r$, randomly chosen by Jaya and the number of kids, $n$ living in Block $A$.


## Constraints

- 1 &le; T &le; 10<sup>6</sup>

- 16 &le; r &le; 2 $\cdot$ 10<sup>3</sup>

- 1 &le; n &le; 10<sup>3</sup>

## Output Format

For each test case:

- If the number of blocks is $1$ or $2$, in a new line, print: `NO SHIFTING`.
- But if the number of blocks is $3$ or $4$, print, in  a new line, the minimum between the minimum number of hours  needed for the whole shifting to complete in $3$ blocks and $4$ blocks with the same number of kids i.e, if it takes lesser hours with same kids in $3$ blocks, print that number of hours else, print the number of hours needed in $4$ blocks. Print any of them if they are equal.
- Remember to print your $(answer)modulo(10^{9}+7)$ if blocks are either $3$ or $4$.


## Editorial

- Number of non-zero alphanumeric characters in the hexadecimal representation of the highest power of $16$ that is not greater than any natural number is always $1$.
- The exponent of the highest power of $4$ equal to or just less than the any number between $16$ and $2000$ is between $2$ to $5$ so, we get the required number of blocks by subtracting 1 from this number.
- The second part of the problem is based on $3$ peg  and $4$ peg [Tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi). The number of moves in a  $4$ peg Tower of Hanoi problem is never less than a $3$ peg Twer of Hanoi with the same number of disks.