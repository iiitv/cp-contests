#include <stdio.h>
#include <math.h>

int main(){
		int T;
		scanf("%d",&T);
		while(T--){
				int r,blocks;
				long long n;
				scanf("%d%lld",&r,&n);
				blocks = floor( log(r)/log(4) ) - 1;
				if( blocks == 1 || blocks == 2 ){
					printf("NO SHIFTING\n");
				}
				else{
					long long x, min_steps = 0;
					x = floor( ( -1 + (sqrt( 8*n - 7 )) )/2 );
					min_steps = 1 + floor( n - (x*(x - 1))/2 - 1)*pow(2,x);
					printf("%lld\n",min_steps%(1000000007));
				}
		}
		return 0;
}