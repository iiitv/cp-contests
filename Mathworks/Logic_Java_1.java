import java.util.*;
public class Logic_Java_1
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int div[]={1, 3, 2, 6, 4, 5};
        int t=in.nextInt();
        in.nextLine();
        for(int i=0;i<t;i++)
        {
            String n=in.nextLine();
            int len=n.length();
            int a=n.charAt(len-1)-'0';
            boolean x, y, z;
            x= (a==0)
            int k=5;
            int s1=0,s2=0;
            for(int j=0;j<len;j++,k--)
            {
                if(k==-1)
                    k=5;
                int m=n.charAt(j)-'0';
                s1=s1+m;
                s2=s2+(m*div[k]);
            }
            y=s1%9==0;
            z=s2%7==0;
            if(x&&y&&z)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}                
