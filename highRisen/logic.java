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
            int n=in.nextInt();
            int blocks=(int)(Math.log(r)/Math.log(4));
            blocks--;
            if(blocks<=2)
                System.out.println("NO SHIFTING");
            else
            {
                long x=0, min=0;
                x=(long)((-1+Math.sqrt(8*n-7))/2);
                min=1+(long)((n-(x*(x-1))/2-1)*Math.pow(2,x));
                System.out.println(min%1000000007);
            }
        }
    }
}
