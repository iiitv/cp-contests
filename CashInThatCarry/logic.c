#include<stdio.h>
int main()
{
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
		int n1=0;
		int n2=0;
		char car[500]="";
		scanf("%d",&n1);
		scanf("%d",&n2);
		int t2=n2;
		int t1=n1;
		int c=0;
		int carry=0;
		while(t2>0)
        {
            int y=t2%10;
            carry=0;
            t1=n1;
            while(t1>0)
            {
				int x=t1%10;
                int z=x*y+carry;
                carry=z/10;
                if(carry>0)
                {
                    car[c]=carry+'0';
                    c++;
                }
                t1=t1/10;
            }
            t2=t2/10;
        }
		printf("%d %s \n",c,car);
	}
	return 0;
}
