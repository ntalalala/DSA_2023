#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ngto( ll n ){
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int t;
	cin >> t;
	vector < ll> v;
	while (t--){
		ll k;
		cin >> k;
		v.push_back(k);
	}
	for (int i = 0; i < v.size(); i++){
		ll h = sqrt(v[i]);
		if ( h * h == v[i] && ngto(h)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
