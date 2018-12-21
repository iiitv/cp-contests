#include <bits/stdc++.h>

using namespace std;

int main() {

		cin.tie(NULL);
		cout.tie(NULL);
		ios_base::sync_with_stdio(false);
		int T;
		cin>>T;
		while(T--){
				string num;;
				cin>>num;
				int len = num.size();
				long long sum = 0, ssum = 0, cntr = 0;
				for(int i = 0; i < len; i++ ){
						sum += ( num[i] - '0' );
				}
				int check[6] = {1, 3, 2, -1, -3, -2};
				for(int i=len-1; i > -1; i-- ){
						ssum += (num[i] - '0')*check[cntr];
						cntr++;
						cntr%=6;
				}
				if( num[len - 1] != '0' ){
						cout<<"NO\n";
						continue;
				}
				else if( sum % 9 != 0 ){
						cout<<"NO\n";
						continue;
				}
				else if( ssum % 7 != 0 ){
						cout<<"NO\n";
						continue;
				}
				else cout<<"YES\n"; 
		}
		return 0;
}