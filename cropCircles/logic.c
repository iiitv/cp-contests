#include <stdio.h>
#include <math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long r;
		scanf("%lld",&r);
		printf("%0.2lf\n",r*r*((((4*1.73 - 5)*3.14) - 3*1.73)/2));		//(((4*1.73 - 5)*3.14) - 3*1.73)/2 = 0.4194
	}
	return 0;
}