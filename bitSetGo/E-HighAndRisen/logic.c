#include <stdio.h>
#include <math.h>

int main(){
        int T;
        scanf("%d",&T);
        while(T--){
                int r;
                int n;
                scanf("%d %d",&r,&n);
                if( ( log(r)/log(4) ) - 1 < 3 ){
                    printf("NO SHIFTING\n");
                }
                else{
                    long x, min_steps = 0;
                    x = ( ( -1 + (sqrt( 8*n - 7 )) )/2 );
                    min_steps = 1 + ( n - (x*(x - 1))/2 - 1)*pow(2,x);
                    printf("%ld\n",min_steps%(1000000007));
                }
        }
        return 0;
}
