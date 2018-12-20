#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long n,c;
		scanf("%lld%lld",&c,&n);
		printf("%lld\n",(c*n*n*n)%(1000000007));
	}
	return 0;
}