# Can you even type?

## Problem Statement

*John* has no prior knowledge of typing. You need to help him learn typing by making a program which tests his typing capabilities by giving out the maximum time he can take to type a sentence. For now, the sentence contains only words having the letters from the first row of the keyboard. He uses the left hand to type the letters **QWERT**, and the right hand to type **YUIOP**. He uses the thumbs(either hand) to type whitespace.

Each stroke from the right hand takes 0.1 seconds, and 0.2 seconds from the left hand, if the words contain letters from both hands alternately. He takes 0.3 seconds to type the space, regardless of what hand he ends the last word with. If he has to type two or more letters with the same hand, he takes double the amount of time for each letter. For example, if he has to type the word *`were`*, he will take 0.2+0.4+0.8+1.6=3.0s. 

If a word is repeated in the sentences more than once, the time takes in the time taken to type it the first time divided by 2. This is the maximum time he can take to type a sentence in the program. 

## Input Format

&bull; The first line contains the number of sentences *N*.

&bull; The next following *N* lines have the following format

   1. Line *1* contains number of words in the sentence *W*

   2. Line *2* has the sentence (The words might not have a meaning)

   3. Line *3* is the time taken by him to type the sentence

&bull; The sentence will not have any punctuation marks.

&bull; All letters will be in lowercase


## Constraints

&bull; 1 &le; N &le; 10000

&bull; 0 &le; Number of characters in sentence &le; 3000

&bull; There are no sentences with only one very long word. maximum length of every word is 40

## Output Format

- You have to find out the maximum time he can take to find the sentence and compare it to the time Anuj has taken. If it is greater, print the following “WORK HARDER, *the time*”. If it is equal, print “GOOD, *the time*”. If it is less, print “GREAT JOB, *the time*” on a separate line for every test case.
- Round the time calculated to **2 decimal places**
- For example, in case of “were”, if input time is 3.2, and time calculated is 3.0, then the output should be the following:
- WORK HARD, 3.00

## Editorial

- First separate all words
- Then make an array of all words, such that there is no repitition
- Start checking for each word, letter by letter and find the time. Always check if a word has appeared more than once before finding the time
- compare with given time, and give the results
