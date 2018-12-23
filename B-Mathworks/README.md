# Mathworks

## Problem Statement

Sam was once being too smart for his teacher to handle. As a punishment, she gave him a cryptic problem to solve. She has given him a set of values *v*, and has given the following statements which will determine the numbers required to solve the questions:-

1)	Last digit of the number is used to determine if it is divisible by 2 single digit **prime** numbers *A* and *B*.

2)	The sum of digits will find out if it is divisible by **2 single digit** numbers *C* and *D*.

3)	Remove the last digit, double it, subtract it from the remaining original number and continue doing this until only one digit remains. Using this, we find out if it is divisible by **one single digit** number *E*.

Sam has to find out the numbers *A*, *B*, *C*, *D* and *E* from the statements, and then determine if the given values *v* are divisible by them all.

These numbers **may or may not** be prime unless specified

## Input Format

- First line will contain the number of test cases *T*.
- The following T lines will contain a number *N*

## Constraints

&bull; 1 &le; T &le; 10^<sup>6</sup> 

&bull; 1 &le; N &le; 10<sup>50</sup> 

## Output Format

- Print `YES` if divisible by all numbers *A*, *B*, *C*, *D* and *E*, `NO` if not.
- Print the output of each test case in a separate line.
- The answer isnt always NO

## Editorial

- Take the input number in the form of a string. 
- We have to find out if the number is divisible by 2, 3, 5, 7 and 9. The statements give a hint to these numbers.
