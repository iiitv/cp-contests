# Cash-in that Carry!

## Problem Statement

- Your younger brother in **3rd** grade has been given an assignment to solve a few multiplication problems. No, he isn’t allowed a calculator yet.
- He has to do it the traditional way. He has to find out the *carry operations* and then the sum of the products, i.e. the long hard way. 
- You have to help him solve it. Design a program that finds the number carry operations required to solve the multiplication problem.
## Input Format

- The first line will contain the number of test cases *T*.
- The second line will contain *2* numbers *N1* and *N2*, which have to be multiplied to find the number of carry operations. The numbers have to be multiplied in the specific order, that is *N1* x *N2*.
- The value of the carry is not counted. Only the number. Even if carry is *5*, the increment must only be by *1*.

## Constraints

&bull; 1 &le; t &le; 10<sup>6</sup>

&bull; 1 &le; N1,N2 &le; 10<sup>6</sup>

## Output Format

- Print the number of carry for each test case in a separate line, and also print the carry values next to the number in the order that you find it. 
- There is no need to separate the values with a space or comma


## Editorial
- To find the carry operations required to perform a multiplication problem
- Extract every digit from both numbers, from the units place
- Keeping one digit from *N1* to be constant, multiply all digits from *N1* so that we can find the exact carry values as regular multiplication
- Store carry in a variable and add it to every next multiplication(Important step)
