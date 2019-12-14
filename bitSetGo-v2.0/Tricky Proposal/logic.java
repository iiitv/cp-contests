import java.io.*;
class tc1
{
  public static void main(String args[])throws IOException
  {
      InputStreamReader read = new InputStreamReader(System.in);
      BufferedReader in = new BufferedReader(read);
      int i,x,t,n=1;
      t=Integer.parseInt(in.readLine());
    for(i=0;i<t;i++)
    {
      x=Integer.parseInt(in.readLine());
      while(x>=((n+1)*(n+2)/2))
      {
        System.out.print(x+" ");
        n++;
      }
     System.out.print(x-(n*(n-1))/2);
     System.out.println();
     n=1;
    }
  }
}
