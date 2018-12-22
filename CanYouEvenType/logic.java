import java.util.*;
public class logic
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        while(n>0)
        {
            int w=in.nextInt();
            in.nextLine();
            String s=in.nextLine();
            double t=in.nextDouble();
            String words[]=s.split(" ");
            Set <String> comw= new HashSet<String>();
            for(int i=0;i<w;i++)
            {
                comw.add(words[i]);
            }
            List<String> cow = new ArrayList<String>(comw);
            int a[]=new int[comw.size()];
            Arrays.fill(a,0);
            double b[]=new double[comw.size()];
            Arrays.fill(b,0);
            double time=0;
            for(int i=0;i<w;i++)
            {
				String str=words[i];
                int index=cow.indexOf(words[i]);
                double tim=0.0;
                if(a[index]==0)
                {
                    int l=0;
                    int r=0;
                    for(int j=0;j<str.length();j++)
                    {
                        char ch=str.charAt(j);
                        if(ch=='q' || ch=='w'|| ch=='e'|| ch=='r'|| ch=='t')
                        {
							int rem=1;
							for(int k=0;k<l;k++)
								rem=rem*2;
                            tim=tim+2*rem;
                            l++;
                            r=0;
                        }
                        else if(ch=='y'||ch=='u'||ch=='i'||ch=='o'||ch=='p')
                        {
							int rem=1;
							for(int k=0;k<r;k++)
								rem=rem*2;
                            tim=tim+1*Math.pow(2,r);
                            r++;
                            l=0;
                        }
                    }
                    a[index]++;
                    b[index]=tim;
                }
                else
                    tim=b[index]/2;
                time=time+tim+3;
            }
            time-=3;
			time=time/10.0;
            if(time>t)
                System.out.println("GREAT JOB, "+time);
            else if(time==t)
                System.out.println("GOOD, "+time);
            else
                System.out.println("WORK HARDER, "+time);
	n--;
        }
    }
}
