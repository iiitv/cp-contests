import java.util.*;
public class Logic
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t>0)
        {
            int n1=in.nextInt();
            int n2=in.nextInt();
            int t1=n1;
            int t2=n2;
            int c=0;
            int carry=0;
            String car="";
            while(t2>0)
            {
                int y=t2%10;
                carry=0;
                t1=n1;
                while(t1>10)
                {
                    int x=t1%10;
                    int z=x*y+carry;
                    carry=z/10;
                    if(carry>0)
                    {
                        car=car+carry;
                        c++;
                    }
                    t1=t1/10;
                }
                t2=t2/10;
            }
            System.out.println(c+" "+car);
            t--;
        }
    }
}
