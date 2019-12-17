#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,x,t,n=1;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>x;
    while(x>=((n+1)*(n+2)/2))
    {
      cout<<n<<" ";
      n++;
    }
    cout<<(x-(n*(n-1))/2);
    cout<<"\n";
    n=1;
  }
  return 0;
}
