# A - Be like Bumble

## Problem Statement

Bumble is a hardworking bee. Bumble wants to make hives and gift them to the charming Queen Bee. He also wants to make the hives in a **hexagonal lattice shape** to maintain its geometrical beauty. 

He **makes a new hive each day , next to the previous day's hive, not over it or on it** and with a size just larger to it, while still forming a hexagonal lattice.

On the first day, he makes a hive with one unit cell as:

![image](https://s3.amazonaws.com/hr-assets/0/1545482796-82d35380e4-1.png)

The next day, it **makes a new hexagonal lattice hive** with seven unit cells combined and next to the previous one as:

[Note that the centre of the outer cells form a hexagonal lattice]

![image](https://s3.amazonaws.com/hr-assets/0/1545482809-80d8fb520d-2.png)

After the end of day 2, the hives look like this:

![image](https://s3.amazonaws.com/hr-assets/0/1545482825-d5df314acd-day-1.jpg)

On the third day, it **makes another hive next to the two previous ones**, in the same pattern and goes on doing so for n days.

Seeing his hard work, the Queen Bee decided to award him with a constant times the number of cells he has used altogether to make the hives. Given the number of days n Bumble has worked and the value of the constant c, help the queen calculate the reward.

All the Best!

## Input Format

- The first line contains an integer T, denoting the number of test cases.
- Each of the subsequent T lines contain two numbers c and n, denoting the value of the constant and the number of days Bumble has worked.

## Constraints

- 1 &le; T &le; 10<sup>6</sup>

- 1 &le; c &le; 50

- 1 &le; n &le; 10<sup>4</sup>

## Output Format

- For each test case, print the (reward)modulo(10^{9}+7) in a new line.

## Editorial

The answer is c &bull; n<sup>3</sup>.

The numbers 1, 7, 19, 37... that are the number of hives Bumble has used each day are [centered hexagonal numbers](https://en.wikipedia.org/wiki/Centered_hexagonal_number).

An n<sup>th</sup> centered hexagonal number is given by the formula, n<sup>3</sup> - (n-1)<sup>3</sup>.

Hence, summing up the following for x from 1 to n,
 &Sigma; (x<sup>3</sup> - (x-1)<sup>3</sup>) = n<sup>3</sup>
