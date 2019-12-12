# D - Crop-circles and tryangles

## Problem Statement

Farmers, Basu and Ani woke up one day to find a huge [Crop-circle](https://en.wikipedia.org/wiki/Crop_circle) in their farms and a number written on a signboard. They suspect aliens involved in this. The pattern looks something like this:

![image](https://s3.amazonaws.com/hr-assets/0/1544899113-2eadd56102-reauleux.png)


What's even strange about the crop circle is that it made a particular area of land unusable (shown by the **white region** in the figure).

This started happening every day with the same pattern of the crop circle but different sizes and on different fields. Ani, who was also very sharp at finding patterns, noticed that the centre of any of the three equal arcs in the figure is that vertice of the triangle formed by joining the three points where the arcs meet the outer circle, which lies opposite to that base of this triangle which is nearest to the mid-point of that arc, and the number written on the signboard every day is the radius of the **circle circumscribing this triangle-like shape**.

Now with this much of information, help Basu and Ani to **calculate the area of their land which is left unusable** by the aliens every day.


## Input Format

- The first line contains an integer T, denoting the number of test cases.
- Each of the subsequent T lines contains a natural number, the radius r of the *outer circle*.

## Constraints

- 1 &le; T &le; 10<sup>6</sup>

- 1 &le; r &le; 10<sup>6</sup>

## Output Format

- For each test case, **print the area of the unusable land, rounded to two decimal places**, in a new line.
- Take &pi; as 3.14, &radic;2 as 1.41 &radic;3 as 1.73 and &radic;5 as 2.24 wherever required.

## Editorial

The triangle like shape is a [Reuleaux Triangle](https://en.wikipedia.org/wiki/Reuleaux_triangle).

The area of a Reauleaux Triangle is given by the formula:  (&frac12;) &bull;(&pi; - &radic;3) &bull; r'<sup>2</sup> where r' is the radius of the arc that is making the reuleaux triangle. This formula can also be derived using simple geometry.

The raduis of the arc, r' is the distance between the two vertices of the above reuleaux triangle which gives, r'=&radic;3&bull;r.

Now that we know r and r', the radius of the innermost circle, r'' can easily be calculated. This gives, r''=r&bull;(&radic;3 - 1).

Hence the area of the white region is:

&frac12;(&pi;-&radic;3)&bull; r'<sup>2</sup> - &pi;&bull; r''<sup>2</sup>

which simplifies to,
(<sup>r<sup>2</sup></sup>&frasl;<sub>2</sub>) &bull; ( (4&radic;3-5)&bull;&pi;-3&radic;3 )

Taking, &pi; as 3.14 and &radic;3 as 1.73, **we get r<sup>2</sup>(<sup>( (4&bull;1.73-5)&bull;3.14-3&bull;1.73 )</sup>&frasl;<sub>2</sub>) as the answer.**
