#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        long r;
        cin>>r;
        cout<<fixed<<setprecision(2)<<r*r*((((4*1.73 - 5)*3.14) - 3*1.73)/2)<<"\n";
    }
    return 0;
}