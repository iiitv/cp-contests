import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         Scanner in=new Scanner(System.in);
         int t=in.nextInt();
         while(t>0)
         {
             int r=in.nextInt();
             double ar=0.4194*r*r;
             System.out.printf("%.2f\n",ar);
         }
    }
}
