#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
  int T;
  cin>>T;
  while(T--){
    unsigned long long n1, n2, count = 0;
    string carr;
    int i = 0;
    cin>>n1>>n2;
    while(n2){
        unsigned long long carry = 0;
        int x = n2%10;
        unsigned long long y = n1;
        while(y/10){
            if( ((y%10)*x + carry)/10 ){
                count+=1;
                carr.push_back(((y%10)*x + carry)/10 + '0' );
                carry = carr[i] - '0';
                i += 1;
            }
            else
                carry = 0;
            y/=10;
        }
        n2/=10;
    }
    cout<<count<<" "<<carr<<"\n";
  }
  return 0;
}