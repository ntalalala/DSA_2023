#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd( ll a, ll b){
	if (b == 0) return a;
	else return gcd(b, a % b);
}
ll lcm(ll a, ll b){
	return (a * b) / gcd(a, b);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll tmp = lcm(lcm(x, y), z);
		ll m = (ll) (pow(10, n - 1));
		ll res = (m + tmp - 1) / tmp * tmp;
		if (res < (ll) pow(10, n)) {
			cout << res << endl;
		}  
		else cout << "-1" << endl;
	}
	return 0;
}
