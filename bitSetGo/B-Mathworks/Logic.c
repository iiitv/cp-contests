#include<stdio.h>
#include<string.h>
int main()
{
	int t=0;
	scanf("%d",&t);
	int m=0;
	for(m=0;m<t;m++)
	{
		char c[1000];
		int a[]={1, 3, 2, 6, 4, 5};
		scanf("%s",c);
		int f1=0,f2=0,f3=0;
		int len=strlen(c);
		f1=c[len-1]-'0';
		int i=0;
		int j=5;
		for(i=0;i<len;i++)
		{
			if(j==-1)
				j=5;
			int x=c[i]-'0';
			f2=f2+x;
			f3=f3+a[j]*x; 
			j--;	
		}
		f2=f2%9;
		f3=f3%7;
		if(!f1&&!f2&&!f3)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
