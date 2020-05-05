import java.util.*;
public class abc
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        long  tc=sc.nextLong();
        for(long  i=0;i<tc;i++)
        {
            long  k=sc.nextLong();
            long  n=sc.nextLong();
            long  ans=n/9;
            long  rem=n%9;
            if(k%9==0)
            k=0;
           // System.out.print(" "+ans);
            for(long  j=n-rem+1;j<=n;j++)
            {
                if(j%9==k)
               { ans++;
                break;}
            }
        
            System.out.println(ans);
        }
        

    }
}