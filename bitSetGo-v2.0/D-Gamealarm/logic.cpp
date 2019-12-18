#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
ll n,k;
cin>>k>>n;
ll ans=n/9;
ll rem=n%9;
if(k%9==0)
k=0;
for(int i=n-rem+1;i<=n;i++)
{
if(i%9==k)
{
ans++;
break;
}
}
cout<<ans<<endl;
}
return 0;
}
