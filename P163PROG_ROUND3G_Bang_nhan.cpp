#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n, x;
	cin >> n >> x;
	ll a = sqrt(x), dem = 0;
	for (int i = 1; i <= a && i <= n; i++){
		if (x % i == 0){
			ll k = x / i;
			if ( k <= n ) dem++;
		}
	}
	dem = 2 * dem;
	if (a * a == x && a <= n) dem--;
	cout << dem;
	return 0;
}
