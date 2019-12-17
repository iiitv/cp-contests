# A - [Snakes in Sabar Again](https://www.hackerearth.com/challenges/college/iiitv-bitSetGo-2/algorithm/70ff23bea40b4af7b9364845ea9ab69d/)

Problem Author - Pushkar Patel

## Editorial

According to the question, you are given three sorted arrays `A`, `B`, `C` containing `l`, `m` and `n` elements. You are also give `p`, `q` and `r`.

You are required to print `SNAKE FOUND` if `A` contains `p`, `B` contains `q` and `C` contains `r`. Otherwise, print `DOST HI SAANP HAI`.

This can be done using either linear or binary search on the three arrays and printing `SNAKE FOUND` if the search returns True for all three arrays or `DOST HI SAANP HAI` if otherwise.

The solution codes can be found here:
- [C](logic.c)
- [C++](logic.cpp)
- [Java](logic.java)
- [Python](logic.py)