# Exponential Root

## Problem Statement

$yo$ and $lo$ are best friends and they love maths, their teacher gave them a problem to find a digital root. He gave an integer number $A$ to $yo$ and another integer $B$ to $lo$. 

$yo$ and $lo$ are asked to work together and find the digital root of ${A^B}$.

**PS:** A digital root of a number is sum of all digits in it until we get a single digit.

The digital root of $5674$ is same as the digital root of $5 + 6 + 7 + 4 = 22$ 
and the digital root of $22$ is $2 + 2 = 4$, so the digital root of $5674$ is $4$.

## Input Format

- First line contains an integer A, denoting number given to $yo$.
- Second line contains an integer B, denoting number given to $lo$.

## Constraints

 *	$1 \le A \le 10^{10^5}$
 *	$1 \le B \le 10^{10^5}$

## Output Format

Print the digital root of ${A^B}$.

## Editorial

The constraints are obviously a sign that one should get their hands dirty.
We use few properties here:

1. DigitalRoot$(X) = X%9$
2. DigitalRoot$({9^X}) = 9$
3. DigitalRoot$({3^X}) = 3$ if $X == 1$ else it is $9$.
4. DigitalRoot$({a^X})$ follows a pattern that has a cycle of 6 for rest.

That's all! 😉
