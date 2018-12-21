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
            long c=in.nextInt();
            long n=in.nextInt();
            BigInteger r=BigInteger.valueOf(c*n*n*n).mod(BigInteger.valueOf(1000000007));
            System.out.println(r);
        }
    }
}
