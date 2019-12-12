#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int c;
		long long n;
		scanf("%d%lld",&c,&n);
		printf("%lld\n",(c*n*n*n)%(1000000007));
	}
	return 0;
}