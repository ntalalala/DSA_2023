#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a, b;
	cin >> a >> b;
	vector <long long> v;
	for (int i = 0; i < a; i++){
		ll tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	while (b--){ 
		long long n, m;
		cin >> n >> m;
		if (n == m) cout << "0" << endl;
		else {
			long long min = v[n - 1], max = 0;
			for (int i = n - 1; i < m ; i++) {
				min = v[i] >= min ? min : v[i];
				max = v[i] <= max ? max : v[i];
		}
			cout << max - min << endl;
		}
	}
	return 0;
}
