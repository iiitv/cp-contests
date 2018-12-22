#include<stdio.h>
#include<limits.h>

int main(){
  int T;
  scanf("%d",&T);
  while(T--){
    unsigned long long n1, n2, count = 0;
    char carr[100];
    int i = 0;
    scanf("%lld%lld",&n1,&n2);
    while(n2){
        unsigned long long carry = 0;
        int x = n2%10;
        unsigned long long y = n1;
        while(y/10){
            if( ((y%10)*x + carry)/10 ){
                count+=1;
                carr[i]= ((y%10)*x + carry)/10 + '0';
                carry = carr[i] - '0';
                i += 1;
            }
            else
                carry = 0;
            y/=10;
        }
        n2/=10;
    }
    carr[i]= '\0';
    printf("%lld %s\n",count,carr);
  }
  return 0;
}