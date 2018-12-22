#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
        int T;
        cin>>T;
        while(T--){
                int r,blocks;
                long long n;
                cin>>r>>n;
                blocks = floor( log(r)/log(4) ) - 1;
                if( blocks == 1 || blocks == 2 ){
                    cout<<"NO SHIFTING\n";
                }
                else{
                    long long x, min_steps = 0;
                    x = floor( ( -1 + (sqrt( 8*n - 7 )) )/2 );
                    min_steps = 1 + floor( n - (x*(x - 1))/2 - 1)*pow(2,x);
                    cout<<min_steps%(1000000007)<<"\n";
                }
        }
        return 0;
}