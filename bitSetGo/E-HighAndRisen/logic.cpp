#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
        int T;
        cin>>T;
        while(T--){
                int r,n;
                cin>>r>>n;
                if( ( log(r)/log(4) ) - 1 < 3 ){
                    cout<<"NO SHIFTING\n";
                }
                else{
                    long x, min_steps = 0;
                    x = ( ( -1 + (sqrt( 8*n - 7 )) )/2 );
                    min_steps = 1 + ( n - (x*(x - 1))/2 - 1)*pow(2,x);
                    cout<<min_steps%(1000000007)<<"\n";
                }
        }
        return 0;
}